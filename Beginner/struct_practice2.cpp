#include<iostream>
using namespace std;
struct point {
	int x;
	int y;
};

int main()
{
	point a,b,c;
	cout<<"Enter cordinates of first point:"<<endl;
	cin>>a.x>>a.y;
	cout<<"Enter cordinates of second point:"<<endl;
	cin>>b.x>>a.x;
	c.x = a.x + b.x;
	c.y = a.y + b.y;
	cout<<"This is the cordinates of the calculates:"<<endl;
	cout<<"X: "<<c.x<<endl<<"Y: "<<c.y;
	return(0);
	
}