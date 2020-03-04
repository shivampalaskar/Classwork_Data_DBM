/*
 * Student.h
 *
 *  Created on: 04-Mar-2020
 *      Author: sunbeam
 */

#ifndef SRC_STUDENT_H_
#define SRC_STUDENT_H_
#include<iostream>
#include <string>

class Student {
private :
	char name[20];
	char gender;
	int rollnumber;
	double marks[3];
	double percent;
public:
	//Student();
	void acceptStudentDetails();
	void printStudentDetails();
	void calculatePercent();
};

#endif /* SRC_STUDENT_H_ */
