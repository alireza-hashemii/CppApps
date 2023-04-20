#include<iostream>
using namespace std;
void denominators(int number)
{
	int i = 0;
	for(i;i<number;i++)
		if(number % i == 0)
			cout<<i;
		else
			cout<<"Wasnt the case";
}

int main()
{
	int input;
	cin>>input;
	denominators(input);
	return(0);
}