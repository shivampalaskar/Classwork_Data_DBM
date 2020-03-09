/*
 * Date.h
 *
 *  Created on: 09-Mar-2020
 *      Author: sunbeam
 */

#ifndef SRC_DATE_H_
#define SRC_DATE_H_

class Date {
	int year;
public:
	Date();
	Date(int);
	~Date();
	int getYear() const;
	void setYear(int year);
};

#endif /* SRC_DATE_H_ */
