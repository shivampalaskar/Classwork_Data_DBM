//============================================================================
// Name        : CPP_Assignment.cpp
// Author      : SHIVAM PALASKAR
// Version     :
// Copyright   : OPEN SOURCE
// Description : CPP_Assign2_Q2
//============================================================================

#include <iostream>
#include "Student.h"
#include "Menu.h"
#include <stdlib.h>
#include <iomanip>
#include <algorithm>

int SIZE,flag=0;
using namespace std;

void acceptRecords(Student stud[]) {
	flag = 1;
	for (int i = 0; i < SIZE; i++)
		stud[i].acceptStudentDetails();
}

void displayRecords(Student stud[]) {
	for (int i = 0; i < SIZE; i++)
		stud[i].printStudentDetails();
}
int getRollNumber(){
	int roll_no;
	cout<<"Enter Roll Number : ";
	cin>>roll_no;
	return roll_no;
}

void searchStudent(Student stud[]){
	int roll_no = getRollNumber();
	int student_index = -1;
	for(int i=0;i<SIZE;i++){
		if(roll_no==stud[i].getRollNo()){
			student_index = i;
			break;
		}
	}
	if(student_index==-1)
		cout<<"Not Found"<<endl;
	else
		stud[student_index].printStudentDetails();
}

int getSize(){
	int size;
	cout<<"Enter Number of Students : ";
	cin>>size;
	return size;
}
int cmpfun(void *ptr1,void *ptr2){

	return 1;
}

bool comp(Student &lhs,Student &rhs) { // Reference OR without Reference can be used
	return lhs.getRollNo() < rhs.getRollNo();
}
void sortRecords(Student stud[]){
	sort(stud, stud+SIZE, comp); // sort(start,start+number of element,compare function)
	cout<<"Sort Done !"<<endl;
}

int main() {
	SIZE = getSize();
	Student stud[SIZE];
	int choice;
	while((choice = menuList())!=0){
		switch(choice){
		case 1:
			if (flag==0)
				acceptRecords(stud);
			else
				cout << "Records Full !" << endl;
			break;
		case 2:
			if(flag==1)
				displayRecords(stud);
			else
				cout<<"Empty Records !"<<endl;
			break;
		case 3:
			if(flag==1)
				searchStudent(stud);
			else
				cout << "Empty Records !" << endl;
			break;
		case 4:
			if (flag==1)
				sortRecords(stud);
			else
				cout << "Empty Records !" << endl;
			break;
		default :
			cout<<"Please Select Valid Option !"<<endl;
		}
	}
	return 0;
}
