/*
 * Date.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: shiva
 */
#include<iostream>
#include "Date.h"
using namespace std;

Date::Date() {
	this->day = 1;
	this->month = 1;
	this->year = 1990;
	cout<<"Parameter Less Date Constructor"<<endl;
}

Date::Date(int day, int month,int year) {
	this->day = day;
	this->month = month;
	this->year = year;
	cout<<"Parameterized Date Constructor"<<endl;
}

int Date::getDay() const {
	return this->day;
}

void Date::setDay(int day) {
	this->day = day;
}

int Date::getMonth() const {
	return this->month;
}

void Date::setMonth(int month) {
	this->month = month;
}

int Date::getYear() const {
	return this->year;
}

void Date::setYear(int year) {
	this->year = year;
}

void Date::display(){
	cout<<this->day<<"-"<<this->month<<"-"<<this->year<<endl;
}
void Date::accept(){
	cout<<"Enter Date : ";
	cin>>this->day;
	cin>>this->month;
	cin>>this->year;
}

bool Date::IsLeapYear() {
	if (!(year % 100)) {
		if (!(year % 4)) {
			return true;
		} else
			return false;
	} else if (!(year % 4)) {
		return true;
	} else
		return false;
}

Date::~Date() {
	cout<<"Date Destructor"<<endl;
}

