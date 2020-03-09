/*
 * Manager.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: shiva
 */

#include<iostream>
#include "Manager.h"
using namespace std;

Manager::Manager() {
	this->bonus=0;
}

Manager::Manager(int id,float sal,float bonus) : Employee(id,sal){
	this->bonus = bonus;
}

float Manager::getBonus() {
	return this->bonus;
}

void Manager::setBonus(float bonus) {
	this->bonus = bonus;
}

void Manager::display() {
	Employee::display();
	this->display_manager();
}

void Manager::accept(){
	Employee::accept();
	this->accept_manager();
}

void Manager::display_manager() {
	cout << "Bonus : " << this->bonus<<endl;
}

void Manager::accept_manager() {
	cout << "Bonus : ";
	cin >> this->bonus;
}

Manager::~Manager() {
	// TODO Auto-generated destructor stub
}

