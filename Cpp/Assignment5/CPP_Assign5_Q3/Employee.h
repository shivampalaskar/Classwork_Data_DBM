/*
 * Employee.h
 *
 *  Created on: 09-Mar-2020
 *      Author: shiva
 */

#ifndef SRC_EMPLOYEE_H_
#define SRC_EMPLOYEE_H_

class Employee {
	int id;
	float sal;
public:
	Employee();
	Employee(int,float);
	~Employee();
	int getId();
	void setId(int id);
	float getSal();
	void setSal(float sal);
	void accept();
	void display();
};

#endif /* SRC_EMPLOYEE_H_ */
