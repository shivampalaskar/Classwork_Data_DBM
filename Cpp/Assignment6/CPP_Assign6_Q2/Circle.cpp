/*
 * Circle.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle() {
	this->radius=0;
}

Circle::Circle(float radius){
	this->radius=radius;
}

float Circle::getRadius() {
	return this->radius;
}

void Circle::setRadius(float radius) {
	this->radius = radius;
}

void Circle::accept(){
	cout<<"Radius : ";
	cin>>this->radius;
}

void Circle::display(){
	cout<<"Radius : "<<this->radius<<endl;
}

float Circle::cal_area(){
	return ((3.14)*(this->radius)*(this->radius));
}

float Circle::cal_peri(){
	return (2*(3.14)*(this->radius));
}

Circle::~Circle() {
}

