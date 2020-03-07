#include<iostream>
#include "Account.h"
#include "InsuffucientFunds.h"
using namespace std;

int menuList(){
	cout<<"0. Exit";
	cout<<"1. Accept Details";
	cout<<"2. Display Details";
	cout<<"3. Deposit Amount";
	cout<<"4. Withdraw Amount";
}

int main(){
	Account account[1];
	int choice;
	while((choice = menuList())!=0){
		switch(choice){
		case 1:
			account[0].accept();
		}
	}
}
