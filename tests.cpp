#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"

TEST_CASE("TASK A - length") {
	Coord3D pointP = {10, 20, 30};
	CHECK(length(&pointP) ==  37.4166);

	Coord3D pointT = {3, 4, 0};
	CHECK(length(&pointT) ==  5);
}

TEST_CASE("TASK B - fartherFromOrigin") {
	Coord3D pointP = {10, 20, 30};
	Coord3D pointQ = {-20, 21, -22};
	Coord3D* ans = &pointP;
	CHECK(fartherFromOrigin(&pointP, &pointQ) == ans);

	Coord3D pointA = {15, 2, 6.5};
        Coord3D pointB = {-60, 91, 38};
        Coord3D* ans2 = &pointB;
        CHECK(fartherFromOrigin(&pointA, &pointB) == ans2);
}

TEST_CASE("TASK C - move") {
	Coord3D pos = {0, 0, 100.0};
	Coord3D vel = {1, -5, 0.2};
	move(&pos, &vel, 2.0);
	CHECK(pos.x == 2);
	CHECK(pos.y == -10);
	CHECK(pos.z == 100.4);
}

TEST_CASE("TASK E - cerate & delete") {
	Coord3D* c = createCoord3D(2.3, 5.8, 27.9);
	Coord3D* correct = createCoord3D(2.3, 5.8, 27.9);	
	CHECK(compare(c, correct));
	deleteCoord3D(c); 
	CHECK(!compare(c, correct));
}
