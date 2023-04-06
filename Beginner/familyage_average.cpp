#include<iostream>
using namespace std;
int main()
{
	int father_age,mother_age,son_age;
	cout<<"We need the ages of all family members in order to find out average year of family.\n";
		cout<<"Father Age: ";
		cin>>father_age;
	cout<<"Mother Age: ";
	cin>>mother_age;
		cout<<"Son Age: ";
		cin>>son_age;
	int average = (son_age + mother_age + father_age) / 3;
	// cout<<"Average is: ";
	// cout<<average;
	if(average >= 40)
		cout<<"It looks that you have an old family.\n";
	else if(average < 40)
		cout<<"there is a young passionate family.\n";
	cout<<"Average is: "<<average;
	return 0;
}