/*
 * Salesman.h
 *
 *  Created on: 09-Mar-2020
 *      Author: SHIVAM PALASKAR
 */

#include "Employee.h"
#ifndef SRC_Salesman_H_
#define SRC_Salesman_H_

class Salesman : virtual public Employee {
	float comm;
public:
	Salesman();
	Salesman(int,float,float);
	float getcomm();
	void setcomm(float comm);
	void display();
	void accept();
	~Salesman();
protected:
	void display_Salesman();
	void accept_Salesman();
};

#endif /* SRC_Salesman_H_ */
