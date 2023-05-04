#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int array[10];
	for(int i=0;i<10;i++)
	{
		cout<<"Input a number:"<<endl;
		cin>>array[i];
	}
	cout<<array;
	getch();
	return(0);
}