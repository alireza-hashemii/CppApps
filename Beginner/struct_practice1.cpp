#include<iostream>
using namespace std;
struct date {
	int year;
	int month;
	int day;
};
int main()
{
	date current_t,birthday_t;
	cout<<"Enter current time please:"<<endl;
	cin>>current_t.year>>current_t.month>>current_t.day;
	cout<<"Enter birth time please:"<<endl;
	cin>>birthday_t.year>>birthday_t.month>>birthday_t.day;
	if(current_t.month==birthday_t.month && current_t.day==birthday_t.day)
	{
		cout<<"It's your birthday buddy!";
	}
	else
	{
		cout<<"It's not your birthday!";
	}
	return(0);
}