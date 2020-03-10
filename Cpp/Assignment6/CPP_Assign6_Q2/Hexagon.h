/*
 * Hexagon.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */
#include "Shape.h"
#ifndef SRC_HEXAGON_H_
#define SRC_HEXAGON_H_

class Hexagon : public Shape{
	float side;
public:
	Hexagon();
	void accept();
	void display();
	float cal_area();
	float cal_peri();
	~Hexagon();
	float getSide();
	void setSide(float side);
};

#endif /* SRC_HEXAGON_H_ */
