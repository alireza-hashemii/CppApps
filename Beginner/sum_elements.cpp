#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x, y, n;
	cin >> n;
	x = n / 10;
	y = n % 10;
	cout << x+y;
	getch();
}