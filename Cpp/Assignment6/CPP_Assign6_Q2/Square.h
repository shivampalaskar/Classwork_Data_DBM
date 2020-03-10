/*
 * Square.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */
#include "Shape.h"
#ifndef SRC_SQUARE_H_
#define SRC_SQUARE_H_

class Square : public Shape{
	float side;
public:
	Square();
	Square(float side);
	~Square();
	float getSide();
	void setSide(float side);
	void accept();
	void display();
	float cal_area();
	float cal_peri();
};

#endif /* SRC_SQUARE_H_ */
