#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x,*addr;
	cin>>x;
	addr = &x;
	cout<<*addr<<endl;
	cout<<addr;
	getch();
	return 0;
}