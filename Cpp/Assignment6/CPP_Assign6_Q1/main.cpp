/*
 * main.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include<iostream>
#include "Book.h"
#include "Product.h"
#include "Tape.h"
using namespace std;

int menuList(){
	int choice;
	cout<<"0. Exit "<<endl;
	cout<<"1. Purchase A Book "<<endl;
	cout<<"2. Purchase A Tape "<<endl;
	cout<<"3. Final Bill"<<endl;
	cout<<"Enter Choice : ";
	cin>>choice;
	return choice;
}

int main(){
	Product *ptrProd[3];
	int sum = 0;
	int choice,count=0;
	while((choice = menuList())!=0){
		cout<<"Selected Choice : "<<choice<<endl;
		switch(choice){
		case 1 :
			ptrProd[count] = new Book();
			ptrProd[count]->accept();
			count++;
			break;
		case 2 :
			ptrProd[count] = new Tape();
			ptrProd[count]->accept();
			count++;
			break;
		case 3 :
			cout<<"Generating Final Bill"<<endl;
			sum=0;
			char flag;
			for (int i = 0; i < count; i++) {
				sum = sum + ptrProd[i]->cal_bill();
			}
			cout << "Final Bill : " << sum << endl;
			cout << "Want to Continue Shopping : Y/N : ";
			cin>>flag;
			if(flag == 'n' || flag == 'N')
				choice = 0;
		}
	}
	return 0;
}
