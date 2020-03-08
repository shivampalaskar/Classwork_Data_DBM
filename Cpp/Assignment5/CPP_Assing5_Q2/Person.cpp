/*
 * Person.cpp
 *
 *  Created on: 08-Mar-2020
 *      Author: shiva
 */

#include <iostream>
#include <cstring>
#include "Person.h"
using namespace std;

Person::Person() {
	cout<<"Parameter Less Person Constructor"<<endl;
	strcpy(this->name,"A");
	strcpy(this->addr,"");
}

Person::Person(const char* name,const char* addr,int day,int month,int year) : birth_date(day,month,year){
	cout<<"Parameterized Person Constructor"<<endl;
	strcpy(this->name,name);
	strcpy(this->addr,addr);
}

const char* Person::getAddr() const {
	return this->addr;
}
void Person::setAddr(const char *addr){
	strcpy(this->addr,addr);
}

const Date& Person::getBirthDate() const {
	return this->birth_date;
}

void Person::setBirthDate(const Date& birthDate) {
	this->birth_date = birthDate;
}

const char* Person::getName() const {
	return this->name;
}

void Person::setName(const char *name){
	strcpy(this->name,name);
}

void Person::display(){
	cout<<"Name : "<<this->name<<endl;
	cout<<"Address: "<<this->addr<<endl;
	cout<<"Birth Date : ";
	this->birth_date.display();
}

void Person::accept(){
	cout<<"Enter Name : ";
	cin>>this->name;
	cout<<"Enter Address : ";
	cin>>this->addr;
	this->birth_date.accept();
}

Person::~Person() {
	cout << "Person Destructor" << endl;
}

