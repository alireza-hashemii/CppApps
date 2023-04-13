#include<iostream>
using namespace std;

// Core concept of program
void  circle_area(int radius) 
{
	int area = radius * radius * 2; 
	cout<<area;
}

int main()
{
	int radius;
	cout<<"Enter the radius for the calculation of area: ";
	cin>>radius;
	circle_area(radius);
	cout<<endl<<"Thanks for using me. the number which has been written below is your answer ";
	return(0);
}