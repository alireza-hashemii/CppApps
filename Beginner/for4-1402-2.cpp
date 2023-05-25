#include<iostream>
using namespace std;

// making an struct
struct student {
	string fname;
	string lname;
	float average;
};

int main()
{
	student s[100];
	for(int i=0;i<=99;i++)
	{
		cin>>s[i].fname>>s[i].lname>>s[i].average;
		
	}
	for(int i=0;i<=99;i++)
		if(s[i].average > 16)
			{
				cout<<s[i].fname<<s[i].lname;
			}
	return(0);
}




