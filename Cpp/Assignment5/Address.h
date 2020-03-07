/*
 * Address.h
 *
 *  Created on: 07-Mar-2020
 *      Author: sunbeam
 */

#ifndef SRC_ADDRESS_H_
#define SRC_ADDRESS_H_

class Address {
	char building[30];
	char street[30];
	char city[20];
	int pin;
public:
	Address();
	Address(char*,char*,char*,int);
	void accept();
	void display();
	char* get_building();
	char* get_street();
	char* get_city();
	int get_pin();
	void set_building(char*);
	void set_street(char*);
	void set_city(char*);
	void set_pin(int);
	~Address();
};

#endif /* SRC_ADDRESS_H_ */
