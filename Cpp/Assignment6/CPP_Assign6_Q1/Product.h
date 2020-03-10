/*
 * Product.h
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#ifndef SRC_PRODUCT_H_
#define SRC_PRODUCT_H_

class Product {
	char title[20];
	float price;
public:
	Product();
	Product(const char*,float);
	float getPrice();
	void setPrice(float price);
	const char* getTitle();
	void setTitle(const char*);
	virtual void accept();
	virtual void display();
	virtual float cal_bill()=0;
	virtual ~Product();
};

#endif /* SRC_PRODUCT_H_ */
