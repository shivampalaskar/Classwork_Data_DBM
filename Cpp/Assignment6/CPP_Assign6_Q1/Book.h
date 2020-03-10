/*
 * Book.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include "Product.h"
#ifndef SRC_BOOK_H_
#define SRC_BOOK_H_

class Book : public Product{
	char publication[20];
public:
	Book();
	Book(const char*,int,const char*);
	void accept();
	void display();
	float cal_bill();
	~Book();
};

#endif /* SRC_BOOK_H_ */
