#include <iostream>

using namespace std;
int main()
{
	int num;
	cout<<"ENter a number: ";
	cin>>num;
	for(int i=2;i<=num;i+=2)
	{
		cout<<i<<endl;
	}
	return(0);
}