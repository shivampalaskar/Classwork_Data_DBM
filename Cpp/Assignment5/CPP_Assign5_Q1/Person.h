/*
 * Person.h
 *
 *  Created on: 08-Mar-2020
 *      Author: shiva
 */

#include "Date.h"
#ifndef SRC_PERSON_H_
#define SRC_PERSON_H_

class Person {
	char name[20];
	char addr[30];
	Date birth_date;

public:
	Person();
	Person(const char*,const char*,int,int,int);
	~Person();
	const char* getName() const;
	void setName(const char *);
	const char* getAddr() const;
	void setAddr(const char *);
	const Date& getBirthDate() const;
	void setBirthDate(const Date& birthDate);
	void display();
	void accept();
};

#endif /* SRC_PERSON_H_ */
