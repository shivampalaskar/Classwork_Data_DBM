/*
 * Employee.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: shiva
 */

#include<iostream>
#include<cstring>
#include "Employee.h"
using namespace std;

Employee::Employee() {
	strcpy(this->dept,"");
	this->id=0;
	this->sal=0;
}

Employee::Employee(int id,float sal,const char *dept,Date& date) {
	strcpy(this->dept,dept);
	this->id=id;
	this->sal=sal;
	this->joiningDate=date;
}

const char* Employee::getDept() {
	return this->dept;
}

void Employee::setDept(const char* dept) {
	strcpy(this->dept,dept);
}

int Employee::getId() {
	return this->id;
}

void Employee::setId(int id) {
	this->id = id;
}

const Date& Employee::getJoiningDate() {
	return this->joiningDate;
}

void Employee::setJoiningDate(const Date& joiningDate) {
	this->joiningDate = joiningDate;
}

float Employee::getSal() {
	return this->sal;
}

void Employee::setSal(float sal) {
	this->sal = sal;
}

void Employee::display(){
	cout<<"ID : "<<this->id<<endl;
	cout<<"Department : "<<this->dept<<endl;
	cout<<"Salary : "<<this->sal<<endl;
	cout<<"Joining Date: ";
	this->joiningDate.display();
	cout<<endl;
}

void Employee::accept(){
	cout<<"Enter Details : "<<endl;
	cout<<"ID : ";
	cin>>this->id;
	cout<<"Department : ";
	cin>>this->dept;
	cout<<"Salary : ";
	cin>>this->sal;
	this->joiningDate.accept();
}

Employee::~Employee() {
	// TODO Auto-generated destructor stub
}

