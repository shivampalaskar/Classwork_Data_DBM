/*
 * Cylinder.cpp
 *
 *  Created on: 04-Mar-2020
 *      Author: sunbeam
 */

#include<iostream>
#include "Cylinder.h"
using namespace std;

/*Cylinder::Cylinder() {
	//this->PI=3.14;   // We can't initialise constant variable here using this keyword
	this->height=1;
	this->radius=1;
}*/

Cylinder::Cylinder() : PI(3.14) {  // PARTIAL CONSTRUCTOR MEMBER INITIALISATION LIST
	this->height = 1;
	this->radius = 1;
	this->volume = getVolume();
}

Cylinder::Cylinder(double radius,double height) : PI(3.14) {
	this->height=height;
	this->radius=radius;
	this->volume = getVolume();
}

void Cylinder::printVolume(){
	cout<<"Volume : "<<this->volume<<endl;
}

double Cylinder::getVolume(){
	return  PI*radius*radius*height;

}

