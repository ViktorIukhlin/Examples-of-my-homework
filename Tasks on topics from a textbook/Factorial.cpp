#include<iostream>
using namespace std;

int Fact(int N){
	if (N == 0)
		return 1;

	if (N == 1)
		return 1;

	return N * Fact(N - 1);
}

void main()
{
	int a;
	cout << "Enter Factorial = ";
	cin >> a;
	cout << Fact(a) << endl;
	system("pause");
}