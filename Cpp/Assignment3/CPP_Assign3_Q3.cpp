#include<iostream>
#include<string.h>

using namespace std;

class PasswordMismatch{
private:
	string password;
public :
	PasswordMismatch();
	PasswordMismatch(string password);
	void login(string) throw (int);
 };

PasswordMismatch::PasswordMismatch(){
	this->password="Abc@123";
}
PasswordMismatch::PasswordMismatch(string password){
	this->password=password;
}

void PasswordMismatch::login(string password) throw (int){
	if(password.compare(this->password)==0){
		cout<<"Password Matched !";
	}else
		throw 1;
}
int main(){
	PasswordMismatch pm;
	string password;
	cout<<"Enter Password : ";
	cin>>password;
	try{
		pm.login(password);
	}catch(int i){
		cout<<"Password Mismatch !";
	}
	return 0;
}
