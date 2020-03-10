/*
 * EquilateralTriangle.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */
#include "Shape.h"
#ifndef SRC_EQUILATERALTRIANGLE_H_
#define SRC_EQUILATERALTRIANGLE_H_

class Equilateral_Triangle : public Shape{
	float Side;
public:
	Equilateral_Triangle();
	Equilateral_Triangle(float);
	float getSide();
	void setSide(float side);
	void accept();
	void display();
	float cal_area();
	float cal_peri();
	~Equilateral_Triangle();
};

#endif /* SRC_EQUILATERALTRIANGLE_H_ */
