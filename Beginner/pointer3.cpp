#include<iostream>
using namespace std;
int main()
{
	int first_name=45,last_name=56,*addr1=0,*addr2=0;
	addr1 = &first_name;
	addr2 = &last_name;
	cout<<addr1<<endl;
	cout<<addr2<<endl;
	cout<<*addr1<<endl;
	cout<<*addr2<<endl;
	*addr1 = *addr2;
	cout<<*addr1<<endl;
	cout<<*addr2<<endl;
}