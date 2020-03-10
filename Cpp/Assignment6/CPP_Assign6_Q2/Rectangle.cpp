/*
 * Rectangle.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */
#include <iostream>
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle() {
	this->length=0;
	this->breadth=0;
}

Rectangle::Rectangle(float length,float breadth) {
	this->length=0;
	this->breadth=0;
}

float Rectangle::getBreadth() {
	return this->breadth;
}

void Rectangle::setBreadth(float breadth) {
	this->breadth = breadth;
}

float Rectangle::getLength() {
	return this->length;
}

void Rectangle::setLength(float length) {
	this->length = length;
}

void Rectangle::accept(){
	cout<<"Length : ";
	cin>>this->length;
	cout << "Breadth : ";
	cin >> this->breadth;
}

void Rectangle::display(){
	cout<<"Length : "<<this->length<<endl;
	cout<<"Breadth : "<<this->breadth<<endl;
}

float Rectangle::cal_area(){
	return (this->length)*(this->breadth);
}

float Rectangle::cal_peri(){
	return 2*((this->length)+(this->breadth));
}

Rectangle::~Rectangle() {
}

