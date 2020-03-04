//============================================================================
// Name        : CPP_Assignment.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : CPP_Assign1_Q5
//============================================================================


/*
Write a menu driven program for class Student. In Main Create Array of Objects and
provide facility for Accept, Print, Search and Sort.
For student accept name, gender, rollnumber and marks of three subjects from user
and print name, rollnumber, gender and percentage.
Provide global function e.g. “SortRecord ()” for sorting array. When we search 	a particular student in an array and if it is founds show all record of that 	student otherwise show some error message.
*/

#include <iostream>
#include"Student.h"
#include<stdlib.h>

#define SIZE 2

using namespace std;
int cmpfunc(const void * book1, const void * book2) {
	int l = *((BOOK *)book1)->name;
	int r = *((BOOK *)book2)->name;
	return (l - r);
}
void sortRecord(Student st[]) {
	//qsort(st, 2, sizeof(st),comfunc);
	qsort(st,2, sizeof(st),cmpfunc);
}

int main() {
	Student st[SIZE];
	for(int i=0;i<SIZE;i++)
		st[i].acceptStudentDetails();
	for(int i=0;i<2;i++)
		st[i].printStudentDetails();
	sortRecord(st);
	return 0;
}
