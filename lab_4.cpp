#include <iostream>
#include <stdarg.h>
using namespace std;
void ab1(int a,int b)
{
	if (a > b)
	{
		a = a * 5;
		b = b - 5;
	}
	else
	{
		a = a - 5;
		b = b * 5;
	}
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

void ab(int& a, int& b)
{
	if (a > b)
	{
		a = a * 5;
		b = b - 5;
	}
	else
	{
		a = a - 5;
		b = b * 5;
	}
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

int main()
{
	int a, b;
	cout << "Enter a,b" << endl;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	ab(a, b);
	ab1(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
