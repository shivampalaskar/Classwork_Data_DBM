/*
 * Person.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#include "Date.h"
#ifndef SRC_PERSON_H_
#define SRC_PERSON_H_

class Person {
	char name[20];
	Date birth_date;
public:
	Person();
	Person(const char*,int);
	~Person();
};

#endif /* SRC_PERSON_H_ */
