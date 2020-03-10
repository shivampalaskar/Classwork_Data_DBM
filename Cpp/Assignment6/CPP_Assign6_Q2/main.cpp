/*
 * main.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: sunbeam
 */

#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "EquilateralTriangle.h"
#include "Hexagon.h"
using namespace std;

int menuList(){
	int choice;
	cout<<"0. Exit"<<endl;
	cout<<"1. Circle"<<endl;
	cout<<"2. Rectangle"<<endl;
	cout<<"3. Square"<<endl;
	cout<<"4. Equilateral Triangle"<<endl;
	cout<<"5. Hexagon"<<endl;
	cout<<"Enter Choice : ";
	cin>>choice;
	return choice;
}

int main(){
	//Shape s; // cannot declare variable ‘s’ to be of abstract type ‘Shape’
	int choice;
	Shape *ptrShape;
	while((choice = menuList())!=0){
		switch(choice){
		case 1 :
			ptrShape = new Circle();
			break;
		case 2 :
			ptrShape = new Rectangle();
			break;
		case 3 :
			ptrShape = new Square();
			break;
		case 4 :
			ptrShape = new Equilateral_Triangle();
			break;
		case 5:
			ptrShape = new Hexagon();
			break;
		}

		ptrShape->accept();
		ptrShape->display();
		float area = ptrShape->cal_area();
		float perimeter = ptrShape->cal_peri();
		cout<<"Area : "<<area<<endl;
		cout<<"Perimeter : "<<perimeter<<endl;
	}
	return 0;
}
