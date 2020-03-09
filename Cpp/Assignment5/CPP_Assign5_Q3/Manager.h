/*
 * Manager.h
 *
 *  Created on: 09-Mar-2020
 *      Author: shiva
 */

#include "Employee.h"
#ifndef SRC_MANAGER_H_
#define SRC_MANAGER_H_

class Manager : virtual public Employee {
	float bonus;
public:
	Manager();
	Manager(int,float,float);
	float getBonus();
	void setBonus(float bonus);
	void display();
	void accept();
	~Manager();
protected :
	void display_manager();
	void accept_manager();

};

#endif /* SRC_MANAGER_H_ */
