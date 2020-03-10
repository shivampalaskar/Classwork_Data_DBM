/*
 * Rectangle.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */
#include "Shape.h"
#ifndef SRC_RECTANGLE_H_
#define SRC_RECTANGLE_H_

class Rectangle : public Shape {
	float length,breadth;
public:
	Rectangle();
	Rectangle(float,float);
	~Rectangle();
	float getBreadth();
	void setBreadth(float breadth);
	float getLength();
	void setLength(float length);
	void accept();
	void display();
	float cal_area();
	float cal_peri();
};

#endif /* SRC_RECTANGLE_H_ */
