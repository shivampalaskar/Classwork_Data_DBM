/*
 * Person.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#include<iostream>
#include <cstring>
#include "Person.h"
using namespace std;

Person::Person() {
	cout<<"Person Parameterless Constructor Call"<<endl;
	strcpy(this->name,"NULL");
}

/*Person::Person(const char*name){
	cout<<"Person Parameterized Constructor Call"<<endl;
	strcpy(this->name,name);
}*/

/*Person::Person(const char*name,Date date){
	cout<<"Person Parameterized Constructor Call"<<endl;
	strcpy(this->name,name);
	this->birth_date=date;
}*/

/*Person::Person(const char*name,Date date) : birth_date(date.getYear()){
	cout<<"Person Parameterized Constructor Call"<<endl;
	strcpy(this->name,name);
}*/

Person::Person(const char*name,int year) : birth_date(year) {
	cout<<"Person Parameterized Constructor Call"<<endl;
	strcpy(this->name,name);
}

Person::~Person() {
	cout<<"Person Destructor Call"<<endl;
}

