#include<iostream>
using namespace std;

void foo(int* pa, int* pb)
{
	int a = *pa;
	int b = *pb;
	*pa = b;
	*pb = a;
}

void main()
{
	int a, b;
	cout << "Enter a =";
	cin >> a;
	cout << "Enter b =";
	cin >> b;

	int* pa = &a;
	int* pb = &b;

	foo(&a, &b);

	cout << "a =" << a << "b =" << b << endl;

	system("pause");
}