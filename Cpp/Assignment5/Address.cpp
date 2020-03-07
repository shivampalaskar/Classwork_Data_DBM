/*
 * Address.cpp
 *
 *  Created on: 07-Mar-2020
 *      Author: sunbeam
 */

#include <iostream>
#include <string.h>
#include<iomanip>
using namespace std;
#include "Address.h"

Address::Address() {
	strcpy(this->building,"Yashwin");
	strcpy(this->city,"Pune");
	this->pin = 123456;
	strcpy(this->street,"Maan Road");
}
Address::Address(char* ptrBuilding,char *ptrStreet,char *ptrCity,int pin){
	strcpy(this->building, ptrBuilding);
	strcpy(this->city, ptrCity);
	this->pin = 123456;
	strcpy(this->street, ptrStreet);
}
Address::~Address() {
	cout<<"Destructor";
}

void Address::accept(){
	cout<<"Enter Details : "<<endl;
	cout<<"Building : ";
	cin>>this->building;
	cout<<"City : ";
	cin>>this->city;
	cout<<"Street : ";
	cin>>this->street;
	cout<<"Pin : ";
	cin>>this->pin;
}
void Address::display() {
	cout <<left<<setw(10)<<this->building;
	cout <<left<<setw(10)<<this->city;
	cout <<left<<setw(10)<<this->street;
	cout <<left<<setw(10)<<this->pin;
	cout<<endl;
}
char* Address::get_building(){
	return this->building;
}
char* Address::get_street(){
	return this->street;
}
char* Address::get_city(){
	return this->city;
}
int Address::get_pin(){
	return this->pin;
}
void Address::set_building(char* ptrBuilding){
	strcpy(this->building,ptrBuilding);
}
void Address::set_street(char* ptrStreet){
	strcpy(this->street,ptrStreet);
}
void Address::set_city(char* ptrCity){
	strcpy(this->city,ptrCity);
}
void Address::set_pin(int pin){
	this->pin = pin;
}
