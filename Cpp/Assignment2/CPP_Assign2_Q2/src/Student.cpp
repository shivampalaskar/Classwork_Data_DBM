/*
 * Student.cpp
 *
 *  Created on: 04-Mar-2020
 *      Author: sunbeam
 */

#include "Student.h"
#include<iostream>
using namespace std;

void Student::acceptStudentDetails(){
	cout<<"Enter Name : ";
	cin>>this->name;
	cout<<"Enter Gender(M/F) : ";
	cin>>this->gender;
	cout<<"Enter Roll Number : ";
	cin>>this->rollnumber;
	cout<<"Enter Marks : "<<endl;
	for (int i = 0; i < 3; i++) {
		cout << "Subject "<<i<<" : ";
		cin >> this->marks[i];
	}
	calculatePercent();
}

void Student::printStudentDetails(){
	cout<<this->name<<endl;
	cout<<this->rollnumber<<endl;
	cout<<this->gender<<endl;
	cout<<this->percent<<endl;
}

void Student::calculatePercent(){
	double sum = (marks[0]+marks[1]+marks[2]);
	this->percent = (sum*100)/300;
}























