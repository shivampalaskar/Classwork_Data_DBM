/*
 * Circle.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */
#include "Shape.h"
#ifndef SRC_CIRCLE_H_
#define SRC_CIRCLE_H_

class Circle : public Shape{
	float radius;
public:
	Circle();
	Circle(float);

	float getRadius();
	void setRadius(float radius);

	void accept();
	void display();
	float cal_area();
	float cal_peri();

	~Circle();
};

#endif /* SRC_CIRCLE_H_ */
