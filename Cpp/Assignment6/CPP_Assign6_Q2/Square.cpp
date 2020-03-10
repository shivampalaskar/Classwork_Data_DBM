/*
 * Square.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include <iostream>
#include "Square.h"
using namespace std;

Square::Square() {
	this->side=0;
}

Square::Square(float side) {
	this->side=side;
}

float Square::getSide() {
	return this->side;
}

void Square::setSide(float side) {
	this->side = side;
}

void Square::accept(){
	cout<<"Side : ";
	cin>>this->side;
}

void Square::display(){
	cout<<"Side : "<<this->side<<endl;
}

float Square::cal_area(){
	return ((this->side)*(this->side));
}

float Square::cal_peri(){
	return 4*(this->side);
}

Square::~Square() {
	// TODO Auto-generated destructor stub
}

