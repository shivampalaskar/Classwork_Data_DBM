/*
 * Salesman.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: shiva
 */

#include<iostream>
#include "Salesman.h"
using namespace std;

Salesman::Salesman() {
	this->comm=0;
}

Salesman::Salesman(int id,float sal,float comm) : Employee(id,sal){
	this->comm = comm;
}

float Salesman::getcomm() {
	return this->comm;
}

void Salesman::setcomm(float comm) {
	this->comm = comm;
}

void Salesman::display() {
	Employee::display();
	this->display_Salesman();
}

void Salesman::accept(){
	Employee::accept();
	this->accept_Salesman();
}

void Salesman::display_Salesman() {
	cout << "comm : " << this->comm<<endl;
}

void Salesman::accept_Salesman() {
	cout << "comm : ";
	cin >> this->comm;
}

Salesman::~Salesman() {
}

