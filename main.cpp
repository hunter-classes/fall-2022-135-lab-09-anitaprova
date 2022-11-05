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
	
	
	
	return 0;
}
