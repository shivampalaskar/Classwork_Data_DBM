/*
 * Employee.h
 *
 *  Created on: 08-Mar-2020
 *      Author: SHIVAM PALASKAR
 */
#include "Date.h"
#include "Person.h"
#ifndef SRC_EMPLOYEE_H_
#define SRC_EMPLOYEE_H_

class Employee : public Person{
	int id;
	float sal;
	char dept[24];
	Date joiningDate;
public:
	Employee();
	Employee(int id,float sal,const char *dept,Date date);
	const char* getDept();
	void setDept(const char* dept);
	int getId();
	void setId(int id);
	const Date& getJoiningDate();
	void setJoiningDate(const Date& joiningDate);
	float getSal();
	void setSal(float sal);
	void display();
	void accept();
	~Employee();
};

#endif /* SRC_EMPLOYEE_H_ */
