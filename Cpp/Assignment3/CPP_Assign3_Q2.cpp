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
	int **mtrx1;
public :
	Matrix();
	Matrix(int,int,int [][2]);
	void add(Matrix &,Matrix &);
	void multi(Matrix &, Matrix&);
	void sub(Matrix &, Matrix&);
	void transpose(Matrix &);
	void printMatrix();
};

void Matrix::printMatrix() {
	int i,j;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << mtrx1[i][j] << '\t';
		}
		cout <<'\n';
	}
	cout<<endl;
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

Matrix::Matrix(int row,int col,int userMtrx[][2]) {
	mtrx1 = new int*[row];
	for (int i = 0; i < col; ++i)
		mtrx1[i] = new int[row];

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			mtrx1[i][j] = userMtrx[i][j];
		}
	}
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

void Matrix::sub(Matrix &arr1, Matrix &arr2) {
	int diff[2][2];
	int i;
	int j;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {

			diff[i][j] = arr1.mtrx1[i][j] - arr2.mtrx1[i][j];
		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << diff[i][j] << '\t';

		}
		cout << endl;
	}

}

void Matrix::multi(Matrix &arr1, Matrix &arr2) {
	int i, j, k;
	int prod[2][2];
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			prod[i][j] = 0;
			for (k = 0; k < 2; k++) {
				prod[i][j] += arr1.mtrx1[i][k] * arr2.mtrx1[k][j];
			}

		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << prod[i][j] << '\t';

		}
		cout << endl;
	}

}

void Matrix::transpose(Matrix &arr1) {
	int trans[2][2];
	int i;
	int j;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			trans[i][j] = arr1.mtrx1[j][i];

		}
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			cout << trans[i][j] << '\t';

		}
		cout << endl;
	}

}

int main() {
	Matrix m1; //Parameterless constructor

	int userMtrx[2][2];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			userMtrx[i][j] = i + j + 5;
		}
	}
	Matrix m2(2,2,userMtrx); //Parameterized Constructor with User Value

	m1.printMatrix();
	m2.printMatrix();

	cout<<"Addition :"<<endl;
	m1.add(m1, m2);
	cout << "Subtraction: " << endl;
	m1.sub(m1, m2);
	cout << "Multiplication : " << endl;
	m1.multi(m1,m2);
	cout << "Transpose for m1 matrix is : " << endl;
	m1.transpose(m1);

	return 0;
}
