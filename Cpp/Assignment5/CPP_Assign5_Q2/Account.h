/*
 * Account.h
 *
 *  Created on: 07-Mar-2020
 *      Author: sunbeam
 */

#ifndef SRC_ACCOUNT_H_
#define SRC_ACCOUNT_H_

enum account_type{
	SAVING,CURRENT,DMAT
};

class Account {
	int id;
	account_type type;
	double balance;
public:
	Account();
	Account(int,account_type);
	~Account();
	void accept();
	void display();
	double getBalance();
	int getId();
	void setId(int id);
	account_type getType();
	void setType(account_type type);
	void deposit(double);
	void withdraw(double);
};

#endif /* SRC_ACCOUNT_H_ */
