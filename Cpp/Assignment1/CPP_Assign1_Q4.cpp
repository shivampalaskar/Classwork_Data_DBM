//============================================================================
// Name        : CPP_Assignment.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : CPP_Assign1_Q4
//============================================================================

#include <iostream>
using namespace std;

class Box{
private :
	int length,bredth,height;
public :
	Box(int,int,int);
	int getVolume();
};

Box::Box(int length,int bredth,int height){
	this->bredth = bredth;
	this->height = height;
	this->length = length;
}

int Box::getVolume(){
	return length * bredth * height;
}

int main() {
	int l,b,h;
	cout<<"Enter : "<<endl;
	cout<<"Length : ";
	cin >> l;
	cout << "Bredth : ";
	cin >> b;
	cout << "Height : ";
	cin >> h;

	Box box(l,b,h);
	int volume = box.getVolume();
	cout<<"Volume : "<<volume;

	return 0;
}
