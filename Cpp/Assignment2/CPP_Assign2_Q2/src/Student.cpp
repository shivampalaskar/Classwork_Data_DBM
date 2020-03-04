/*
 * Student.cpp
 *
 *  Created on: 04-Mar-2020
 *      Author: sunbeam
 */

#include "Student.h"
#include<iostream>
#include <iomanip>

using namespace std;

void Student::acceptStudentDetails() {
	cout << "Enter Name : ";
	cin >> this->name;
	cout << "Enter Gender(M/F) : ";
	cin >> this->gender;
	cout << "Enter Roll Number : ";
	cin >> this->rollnumber;
	cout << "Enter Marks : " << endl;
	for (int i = 0; i < 3; i++) {
		cout << "Subject " << i << " : ";
		cin >> this->marks[i];
	}
	calculatePercent();
}

void Student::printStudentDetails() {
	cout<<left<<setw(10) <<this->name<<setw(4)<<this->rollnumber<<setw(4)<<this->gender<<setw(4)<<percent<<endl;
}

void Student::calculatePercent() {
	double sum = (marks[0] + marks[1] + marks[2]);
	this->percent = (sum * 100) / 300;
}

int Student::getRollNo(){
	return this->rollnumber;
}

