//============================================================================
// Name        : CPP_Assignment.cpp
// Author      : SHIVAM PALASKAR
// Version     :
// Copyright   : Your copyright notice
// Description : CPP_Assign3_Q1
//============================================================================

#include <iostream>
#include <time.h>
using namespace std;

class Matrix{
private :
	int** mtrx1;
public :
	Matrix();
	Matrix(int,int);
	void add(Matrix &,Matrix &);
	void printMatrix();
};

void Matrix::printMatrix() {
	int i,j;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << mtrx1[i][j] << '\t';
		}
	}
}

Matrix::Matrix() {
	mtrx1 = new int*[2];
	for (int i = 0; i < 2; ++i)
		mtrx1[i] = new int[2];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			mtrx1[i][j] = i+j;
		}
	}
}

Matrix::Matrix(int row,int col) {
	mtrx1 = new int*[row];
	for (int i = 0; i < col; ++i)
		mtrx1[i] = new int[row];
}

void Matrix::add(Matrix &arr1, Matrix &arr2) {
	int sum[2][2];
	int i;
	int j;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {

			sum[i][j] = arr1.mtrx1[i][j] + arr2.mtrx1[i][j];
		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << sum[i][j] << '\t';

		}
		cout << endl;
	}

}

int main() {
	Matrix m1;
	Matrix m2;
	m1.printMatrix();

	cout<<"Matrix addition is :"<<endl;
		m1.add(m1,m2);

	return 0;
}
