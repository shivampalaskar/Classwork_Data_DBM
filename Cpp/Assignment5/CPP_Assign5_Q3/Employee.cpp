/*
 * Employee.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: shiva
 */

#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee() {
	this->id = 0;
	this->sal = 0;
}

Employee::Employee(int id,float sal) {
	this->id = id;
	this->sal = sal;
}

int Employee::getId() {
	return this->id;
}

void Employee::setId(int id) {
	this->id = id;
}

float Employee::getSal() {
	return this->sal;
}

void Employee::setSal(float sal) {
	this->sal = sal;
}

void Employee::accept() {
	cout << "Enter Details : " << endl;
	cout << "ID : ";
	cin>>this->id;
	cout << "Salary : ";
	cin >> this->sal;
}
void Employee::display() {
	cout << "ID : " << this->id << endl;
	cout << "Salary : " << this->sal << endl;
}
Employee::~Employee() {
}

