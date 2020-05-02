#include <iostream>

using namespace std;

int main()
{
	int firstnumber, secondnumber, sum;
	link:
	cout << "Give first number : ";
	cin >> firstnumber;
	cout << endl;

	cout << "Give second number : ";
	cin >> secondnumber;
	cout << endl;

	sum = firstnumber + secondnumber;
	int answer;
	cout << "The sum of two digits : "; cin >> answer;

	if (answer == sum)
		cout << "Great! You are Cool!" << endl;
	else
		cout << "Wrong! Right answer " << sum << endl;

	cout << endl <<"Again ? Yes.1 No.2 :";
	int answ;cin >> answ;
	if (answ == 1) goto link;
	else if (answ == 2) return 0;
	else return 0;

}