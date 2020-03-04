//============================================================================
// Name        : Day2_3.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cylinder.h"

using namespace std;

int main()
{
	Cylinder c;
	c.printVolume();
	Cylinder c1(2,3);
	c1.printVolume();
    return 0;
}
