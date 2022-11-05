#include <iostream>
#include <cmath>
#include "funcs.h"
#include "coord3d.h"

// add functions here
double length(Coord3D *p) {	
	double d = pow((*p).x,2) + pow((*p).y,2) + pow((*p).z,2);	
	
	return sqrt(d);
}
