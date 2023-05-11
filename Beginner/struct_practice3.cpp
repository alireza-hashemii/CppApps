#include<iostream>
using namespace std;
struct student {
	string name ;
	float degree;
};

int main()
{
	student a,b,c;
	cout<<"Enter specifications of first student:"<<endl;
	cin>>a.name>>a.degree;
	cout<<"Enter specifications of second  student:"<<endl;
	cin>>b.name>>a.degree;
	if(a.degree > b.degree)
	{
		cout<<"The individual has a higher degree --> "<<a.name;
	}
	else
	{
		cout<<"The individual has a higher degree --> "<<b.name;
	}
	return(0);
	
}