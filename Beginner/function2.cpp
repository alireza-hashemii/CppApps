#include<iostream>
using namespace std;

// Core concept of program
int circle_area(int radius) 
{
	int area = radius * radius * 2; 
	return(area);
}

int main()
{
	int radius;
	cout<<"Enter the radius for the calculation of area: ";
	cin>>radius;
	int answer = circle_area(radius);
	cout<<"Thanks for using me. the number which has been written below is your answer "<<endl;
	cout<<answer;
	return(0);
}