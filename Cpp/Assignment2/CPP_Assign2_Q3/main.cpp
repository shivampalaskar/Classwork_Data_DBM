#include<iostream>
using namespace std;

int sqr(int num) {
	int sqrNum = num * num;
	return sqrNum;
}

int main(){
	int num;
	cout<<"Enter a Number : ";
	cin>>num;
	try{
		if(num<0)
			throw 1;
		else{
			int result = sqr(num);
			cout << "Square : " << result;
		}
	}catch(int i){
		cout<<"Negaive Number"<<endl;
	}
	return 0;
}


int sqr2(int num) {
	int sqrNum=0;
	try {
		if (num < 0)
			throw 1;
		else {
			sqrNum = num * num;
		}
	} catch (int i) {
		cout << "Negaive Number" << endl;
	}
	return sqrNum;
}

int main2(){
	int num;
	cout<<"Enter a Number : ";
	cin>>num;
	int result = sqr(num);
	cout << "Square : " << result;
	return 0;
}
