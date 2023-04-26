#include<iostream>
using namespace std;

void adding_unit(int *p2,int *p1)
	{
	int komaki = *p2;
	*p2 = *p1;
	*p1 = komaki;	
	}
int main()
	{
	int c,d;
	c = 2;
	d = 5;
	adding_unit(&c,&d);
	cout<<c<<endl;
	cout<<d;
	return(0);
	}