#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x;
	char ans = 'y';
	while(ans=='y' || ans=='Y')
	{
		cout<<"Enter the value of x: "<<endl;
		cin>>x;
		for(int i=2;i<x;i++)
		{
			if(x % i ==0)
			{
			cout<<"Number "<<x<<" is not prime";
			system("pause");
			}
			
		}
		cout<<"Number "<<x<<" is prime"<<endl;
		cout<<"Enter Y or y to continue: ";
		cin>>ans;
		
	}
	cout<<"it was amazing to see you buds (:";
}