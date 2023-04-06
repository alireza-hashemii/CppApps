#include<iostream>
using namespace std;
int main()
{
 	int x,y,*addr1,*addr2;
 	addr1 = &x;
 	addr2 = &y;
 	if(addr1==addr2)
 		{
 		cout<<"Both pointers are pointing a same unit of memory";	
		}
	else
		{
 		cout<<"They aren't pointing to the same unit.";
		}
}