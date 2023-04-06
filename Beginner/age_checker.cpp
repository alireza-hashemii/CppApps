#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	if(age < 10)
		cout<<"You are a kiddo";
	if(10 < age < 20)
		cout<<"You are middle aged";
	if(age > 20)
		cout<<"You are an adult";

}