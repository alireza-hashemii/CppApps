#include<iostream>
using namespace std;
// making an struct
struct student {
	string fname;
	string lname;
	int student_number;
	float average;
};

// core of program
int main()
{
	student s1,s2;
	cin>>s1.fname>>s1.lname>>s1.student_number>>s1.average;
	cin>>s1.fname>>s2.lname>>s2.student_number>>s2.average;
	if(s1.average > s2.average)
	{
		cout<<"Student one has a higher average"<<endl;
		cout<<s1.fname<<s1.lname;
	}
	if(s1.average < s2.average)
	{
		cout<<"Student two has a higher average"<<endl;
		cout<<s2.fname<<s2.lname;
	}
	else
	{
		cout<<"Equal";
	}
	return(0);
}