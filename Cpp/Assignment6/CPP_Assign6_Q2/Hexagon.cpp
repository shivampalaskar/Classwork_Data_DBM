/*
 * Hexagon.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include <iostream>
#include "Hexagon.h"
#include <cmath>
using namespace std;


Hexagon::Hexagon() {
	// TODO Auto-generated constructor stub

}

void Hexagon::accept(){
	cout<<"Side : ";
	cin>>this->side;
}

void Hexagon::display(){
	cout<<"Side : "<<this->side<<endl;
}

float Hexagon::cal_area(){
	return ((3*(sqrt(3))*(this->side)*this->side))/2;
}

float Hexagon::cal_peri(){
	return 6*(this->side);
}

float Hexagon::getSide() {
	return side;
}

void Hexagon::setSide(float side) {
	this->side = side;
}

Hexagon::~Hexagon() {
	// TODO Auto-generated destructor stub
}

