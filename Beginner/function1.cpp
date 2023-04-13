#include<iostream>
using namespace std;

// Core concept of program
int area(int a,int b) 
{
	int ans = a * b; 
	return(ans);
}

int main()
{
	int a,b;
	cout<<"Enter the first number for the calculation of area: ";
	cin>>a;
	cout<<"Enter the second number for the calculation of area: ";
	cin>>b;
	int answer = area(a,b);
	cout<<"Thanks for using me. the number which has been written below is your answer "<<endl;
	cout<<answer;
	return(0);
}
