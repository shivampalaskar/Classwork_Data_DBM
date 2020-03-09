/*
 * SalesManager.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: shiva
 */

#include "SalesManager.h"
#include "Employee.h"
#include "Salesman.h"
#include "Manager.h"

SalesManager::SalesManager() {
}

SalesManager::SalesManager(int id ,float sal,float bonus ,float comm) : Employee(id,sal),Manager(id,sal,bonus),Salesman(id,sal,comm) {
}

void SalesManager::display(){
	Employee::display();
	Manager::display_manager();
	Salesman::display_Salesman();
}
void SalesManager::accept(){
	Employee::accept();
	Manager::accept_manager();
	Salesman::accept_Salesman();
}

SalesManager::~SalesManager() {
}

