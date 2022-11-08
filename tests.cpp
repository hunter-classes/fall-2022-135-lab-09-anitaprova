#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"

// add your tests here
TEST_CASE("length") {
	Coord3D pointP = {3, 4, 0};
	CHECK(length(&pointP) ==  5);
}

TEST_CASE("fartherFromOrigin") {
	Coord3D pointP = {10, 20, 30};
	Coord3D pointQ = {-20, 21, -22};
	Coord3D* ans = &pointP;
	CHECK(fartherFromOrigin(&pointP, &pointQ) == ans);
}

TEST_CASE("move") {
	Coord3D pos = {0, 0, 100.0};
	Coord3D vel = {1, -5, 0.2};
	move(&pos, &vel, 2.0);
	CHECK(pos.x == 2);
	CHECK(pos.y == -10);
	CHECK(pos.z == 100.4);
}
