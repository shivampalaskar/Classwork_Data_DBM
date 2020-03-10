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

float calc_Area(Shape *ptrShape[],int count){
	float tarea=0;
	for(int i=0;i<count;i++){
		tarea+=ptrShape[i]->cal_area();
	}
	return tarea;
}

float calc_Peri(Shape *ptrShape[], int count) {
	float tperi = 0;
	for (int i = 0; i < count; i++) {
		tperi += ptrShape[i]->cal_peri();
	}
	return tperi;
}

int main(){
	//Shape s; // cannot declare variable ‘s’ to be of abstract type ‘Shape’
	int choice,count=0;
	Shape *ptrShape[5];
	while((choice = menuList())!=0 && count < 5){
		switch(choice){
		case 1 :
			ptrShape[count] = new Circle;
			ptrShape[count]->accept();
			count++;
			break;
		case 2 :
			ptrShape[count] = new Rectangle;
			ptrShape[count]->accept();
			count++;
			break;
		case 3 :
			ptrShape[count] = new Square();
			ptrShape[count]->accept();
			count++;
			break;
		case 4 :
			ptrShape[count] = new Equilateral_Triangle();
			ptrShape[count]->accept();
			count++;
			break;
		case 5:
			ptrShape[count] = new Hexagon();
			ptrShape[count]->accept();
			count++;
			break;
		}
	}
	float tarea = calc_Area(ptrShape,count);
	float tperimeter = calc_Peri(ptrShape,count);
	cout << "TotalArea : " << tarea << endl;
	cout << "Total Perimeter : " << tperimeter << endl;
	for(int i=0;i<count;i++)
		delete ptrShape[i];
	return 0;
}
