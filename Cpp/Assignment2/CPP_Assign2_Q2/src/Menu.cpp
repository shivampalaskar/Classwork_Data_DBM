/*
 * Menu.cpp
 *
 *  Created on: 04-Mar-2020
 *      Author: Shivam Palaskar
 */
#include<iostream>
#include "Menu.h"
#include "Student.h"
using namespace std;

int menuList(){
	int choice;
	cout<<"0. Exit"<<endl;
	cout<<"1. Accept Student Record"<<endl;
	cout<<"2. Display Student Records"<<endl;
	cout<<"3. Search Student Record"<<endl;
	cout<<"4. Sort Records By Roll Number"<<endl;
	cout<<"Enter Choice : ";
	cin>>choice;
	return choice;
}
