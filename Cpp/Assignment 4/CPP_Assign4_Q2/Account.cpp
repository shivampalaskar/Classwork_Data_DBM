/*
 * Account.cpp
 *
 *  Created on: 07-Mar-2020
 *      Author: sunbeam
 */

#include <iostream>
#include "Account.h"
#include <string.h>
using namespace std;

Account::Account() {
	// TODO Auto-generated constructor stub

}

Account::~Account() {
	// TODO Auto-generated destructor stub
}

double Account::getBalance()  {
	return balance;
}

int Account::getId()  {
	return id;
}

void Account::setId(int id) {
	this->id = id;
}

account_type Account::getType()  {
	return type;
}

void Account::setType(account_type type) {
	this->type = type;
}

void deposit(double	amount){

}
void withdraw(double amount){

}

void Account::accept(){
	cout<<"Enter Details : ";
	cout<<"Id : ";
	cin>>this->id;
	cout<<"Account Type : ";
	char ty[8];
	cin>>ty;
	if(strcasecmp(ty,"SAVING"))
		type = SAVING;
	else if(strcasecmp(ty,"CURRENT"))
		type = CURRENT;
	else if(strcasecmp(ty,"DMAT"))
		type = DMAT;
	else
		cout<<"Throw Exception"<<endl;
	this->balance

}

