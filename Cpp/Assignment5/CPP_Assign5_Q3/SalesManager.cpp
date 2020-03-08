/*
 * SalesManager.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: shiva
 */

#include "SalesManager.h"

SalesManager::SalesManager() {
}
SalesManager::SalesManager(int id ,float sal,float bonus ,float comm){
	Manager::setId(id);
	//Salesman::setId(id);
	Manager::setBonus(bonus);
	Salesman::setcomm(comm);
}

void SalesManager::display(){
	Manager::display();
	Salesman::display_Salesman();
}
void SalesManager::accept(){
	Manager::accept();
	Salesman::accept_Salesman();
}

SalesManager::~SalesManager() {
}

