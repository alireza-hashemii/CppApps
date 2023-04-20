#include<iostream>
using namespace std;
int sum_digits(int number)
{
	int result = 0;
	while(number != 0)
	{
		result += number % 10;
		number = number / 10;
		
	}
	return(result);
}

int main()
{
	int input;
	cin>>input;
	int final_answer = sum_digits(input);
	cout<<final_answer;
}