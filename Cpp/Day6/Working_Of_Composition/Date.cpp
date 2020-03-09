/*
 * Date.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#include <iostream>
#include "Date.h"
using namespace std;

Date::Date() {
	cout<<"Date Parameterless Constructor Call"<<endl;
	this->year = 1994;
}

Date::Date(int year){
	cout<<"Date Parameterized Constructor Call"<<endl;
	this->year=year;
}

int Date::getYear() const {
	return year;
}

void Date::setYear(int year) {
	this->year = year;
}

Date::~Date() {
	cout<<"Date Destructor Call"<<endl;
}

