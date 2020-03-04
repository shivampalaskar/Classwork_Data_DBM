/*
 * Cylinder.h
 *
 *  Created on: 04-Mar-2020
 *      Author: sunbeam
 */

#ifndef SRC_CYLINDER_H_
#define SRC_CYLINDER_H_

class Cylinder {
private :
	const double PI;  // We can initialize PI here also
	double radius,height;
	double volume;

public:
	Cylinder();  // We can initialize Constant data member and non constant data member
				 // here also using CONSTRUCTOR MEMBER INITIALISATION LIST

	Cylinder(double radius, double height);
	double getVolume();
	void printVolume();
};

#endif /* SRC_CYLINDER_H_ */
