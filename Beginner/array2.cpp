#include<iostream>
#include<conio.h>
using namespace std;
// Function part
int sum_elements(int array[],int len)
{
	int sum=0;
	for(int i=0;i<len;i++)
	{
		sum += i;
	}
	return(sum);
}

int main()
{
	int array[5];
	for(int i=0;i<5;i++)
	{
		cin>>array[i];
	}
	int answer =  sum_elements(array,5);
	cout<<answer;
	return(0);
}