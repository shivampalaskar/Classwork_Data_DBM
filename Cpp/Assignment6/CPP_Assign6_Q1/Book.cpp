/*
 * Book.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */
#include<iostream>
#include <cstring>
#include "Book.h"
#include "Product.h"
using namespace std;

Book::Book() {
	strcpy(this->publication,"");
}

Book::Book(const char* title,int price,const char *publication) : Product(title,price) {
	strcpy(this->publication,publication);
}

void Book::accept(){
	Product::accept();
	cout<<"Publication : ";
	cin>>this->publication;
}

void Book::display() {
	Product::display();
	cout<<"Publication : "<<this->publication<<endl;
}

float Book::cal_bill(){
	return (this->getPrice() * 0.90);
}

Book::~Book() {
}

