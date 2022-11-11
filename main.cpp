#include <iostream>
#include "funcs.h"
#include "coord3d.h"

int main()
{
	Coord3D pointP = {10, 20, 30};
	Coord3D pointQ = {-20, 21, -22};
	
	//TaskA
	std::cout << length(&pointP) << std::endl;
	std::cout << length(&pointQ) << std::endl;
	
	//TaskB
	std::cout << "Address of P: " << &pointP << std::endl;
	std::cout << "Address of Q: " << &pointQ << std::endl << std::endl;

    	Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);

	std::cout << "ans = " << ans << std::endl;
	
	//TaskC	
	Coord3D pos = {0, 0, 100.0};
	Coord3D vel = {1, -5, 0.2};
	move(&pos, &vel, 2.0);
	std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;
	
	//TaskE	
	double x, y, z;
    	Coord3D *ppos = createCoord3D(10,20,30);
    	Coord3D *pvel = createCoord3D(5.5,-1.4,7.77);
    	move(ppos, pvel, 10.0);

	std::cout << "Coordinates after 10 seconds: " << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;

 	deleteCoord3D(ppos);
    	deleteCoord3D(pvel);

	return 0;
}
