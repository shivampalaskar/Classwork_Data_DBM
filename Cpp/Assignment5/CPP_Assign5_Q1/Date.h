/*
 * Date.h
 *
 *  Created on: 08-Mar-2020
 *      Author: SHIVAM PALASKAR
 */

#ifndef SRC_DATE_H_
#define SRC_DATE_H_

class Date {
	int day,month,year;
public:
	Date();
	Date(int,int,int);
	~Date();
	int getDay() const;
	void setDay(int day);
	int getMonth() const;
	void setMonth(int month);
	int getYear() const;
	void setYear(int year);
	void display();
	void accept();
	bool IsLeapYear();
};

#endif /* SRC_DATE_H_ */
