#include<iostream>
using namespace std;

// pass by address
void rectanlge_area(int width,int length,int *p1,int *p2)
	{
	*p1 = width * length;
	*p2 = (width + length) * 2;
		
	}
int main()
	{
	int width,length,p1,p2;
	cin>>width>>length;
	rectanlge_area(width,length,&p1,&p2);
	cout<<"The area of rectangle is: "<<p1<<endl;
	cout<<"The circumference of rectangle is: "<<p2;
	return(0);
	}