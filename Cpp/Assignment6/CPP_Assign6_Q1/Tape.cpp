/*
 * Tape.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include<iostream>
#include <cstring>
#include "Tape.h"
#include "Product.h"

using namespace std;

Tape::Tape() {
	this->realese_year=0;
}

Tape::Tape(const char* title,int release_year,float price) : Product(title,price){
	this->realese_year =  release_year;
}

int Tape::getRealeseYear() {
	return this->realese_year;
}

void Tape::setRealeseYear(int realeseYear) {
	this->realese_year = realeseYear;
}

void Tape::accept(){
	Product::accept();
	cout<<"Release Year : ";
	cin>>this->realese_year;
}
void Tape::display() {
	Product::display();
	cout << "Release Year : "<<this->realese_year<<endl;
}

float Tape::cal_bill(){
	return (this->getPrice() * 0.95);
}

Tape::~Tape() {
}

