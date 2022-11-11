#include <iostream>
#include <cmath>
#include "funcs.h"
#include "coord3d.h"

double length(Coord3D *p) {	
	double d = pow((*p).x,2) + pow((*p).y,2) + pow((*p).z,2);	
	
	return round((sqrt(d)*10000.0))/10000.0;
}

Coord3D* fartherFromOrigin(Coord3D *p1, Coord3D *p2){
	double p1_length = length(p1);
	double p2_length = length(p2);	
	
	if (p1_length > p2_length) {
		return p1;	
	}
	else {
		return p2;
	}
}

void move(Coord3D *ppos, Coord3D *pvel, double dt){
	(*ppos).x += (*pvel).x * dt;
	(*ppos).y += (*pvel).y * dt;
	(*ppos).z += (*pvel).z * dt;
}

Coord3D* createCoord3D(double x, double y, double z){ 
	Coord3D* p = new Coord3D;
	(*p).x = x;
	(*p).y = y;
	(*p).z = z;

	return p;
}

void deleteCoord3D(Coord3D *p){
	delete p;
}

bool compare(Coord3D *p, Coord3D *q) {
	if(p -> x == q -> x && p -> y == q -> y && p -> z == q -> z)
	{
		return true;
	}
	else {
		return false;
	}
}
