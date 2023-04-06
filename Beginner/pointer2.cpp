#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x,*addr;
	x = 2;
	addr = &x;
	cout<<x<<endl;
	cout<<&x<<endl;
	cout<<addr<<endl;
	cout<<&addr<<endl;
	cout<<&*addr<<endl;
	cout<<*addr<<endl;
}