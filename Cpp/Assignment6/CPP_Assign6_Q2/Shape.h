/*
 * Shape.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef SRC_SHAPE_H_
#define SRC_SHAPE_H_

class Shape {
public:
	virtual void accept()=0;
	virtual void display()=0;
	virtual float cal_area()=0;
	virtual float cal_peri()=0;
	Shape();
	virtual ~Shape();
};

#endif /* SRC_SHAPE_H_ */
