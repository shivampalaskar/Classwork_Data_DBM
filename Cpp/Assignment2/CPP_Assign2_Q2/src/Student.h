/*
 * Student.h
 *
 *  Created on: 04-Mar-2020
 *      Author: Shivam Palaskar
 */

extern int SIZE;
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
	int getRollNo();
	void acceptStudentDetails();
	void printStudentDetails();
	void calculatePercent();
};

#endif /* SRC_STUDENT_H_ */
