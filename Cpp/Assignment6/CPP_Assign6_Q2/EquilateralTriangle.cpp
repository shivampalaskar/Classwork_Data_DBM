/*
 * EquilateralTriangle.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */
#include <iostream>
#include <cmath>
#include "EquilateralTriangle.h"
using namespace std;

Equilateral_Triangle::Equilateral_Triangle() {
	this->Side=0;
}

Equilateral_Triangle::Equilateral_Triangle(float side) {
	this->Side=side;
}

float Equilateral_Triangle::getSide() {
	return this->Side;
}

void Equilateral_Triangle::setSide(float side) {
	Side = side;
}

void Equilateral_Triangle::accept(){
	cout<<"Side : ";
	cin>>this->Side;
}

void Equilateral_Triangle::display(){
	cout<<"Side : "<<this->Side<<endl;
}

float Equilateral_Triangle::cal_area(){
	return (sqrt(3)*(this->Side)*(this->Side))/4;
}

float Equilateral_Triangle::cal_peri(){
	return 3*(this->Side);
}
Equilateral_Triangle::~Equilateral_Triangle() {
}

