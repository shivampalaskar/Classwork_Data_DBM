/*
 * Tape.h
 *
 *  Created on: 10-Mar-2020
 *      Author: Shivam Palaskar
 */
#include "Product.h"
#ifndef SRC_TAPE_H_
#define SRC_TAPE_H_

class Tape : public Product {
	int realese_year;
public :
	Tape();
	Tape(const char*,int,float);
	int getRealeseYear();
	void setRealeseYear(int realeseYear);
	const char* getTitle();
	void accept();
	void display();
	float cal_bill();
	~Tape();
};

#endif /* SRC_TAPE_H_ */
