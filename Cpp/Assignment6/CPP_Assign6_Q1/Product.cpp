/*
 * Product.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include <iostream>
#include "Product.h"
#include <cstring>
using namespace std;

Product::Product() {
	strcpy(this->title, "");
	this->price = 0;
}

Product::Product(const char *title,float price) {
	strcpy(this->title, title);
	this->price = price;
}

float Product::getPrice() {
	return price;
}

void Product::setPrice(float price) {
	this->price = price;
}

const char* Product::getTitle() {
	return title;
}

void Product::setTitle(const char* title){
	strcpy(this->title,title);
}

void Product::accept(){
	cout<<"Title : ";
	cin>>this->title;
	cout<<"Price : ";
	cin>>this->price;
}
void Product::display(){
	cout<<"Title : "<<this->title;
	cout<<"Price : "<<this->price;
}

Product::~Product() {
}

