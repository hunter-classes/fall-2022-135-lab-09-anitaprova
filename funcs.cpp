#include <iostream>
#include <cmath>
#include "funcs.h"
#include "coord3d.h"

double length(Coord3D *p) {	
	double d = pow((*p).x,2) + pow((*p).y,2) + pow((*p).z,2);	
	
	return sqrt(d);
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
