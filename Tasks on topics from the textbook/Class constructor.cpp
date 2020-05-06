#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
	int age, weight;
	string name;

	Human(int ageD, int weightD)
	{
		age = ageD;
		weight = weightD;
	}

	void Print()
	{
		cout << "Name: " << name << "\n" << "Age: " << age << "\n" << "Weight: " << weight << endl << endl;
	}
};

int main()
{
	Human FirstPerson(25, 80);

	FirstPerson.name = "Vanya";

	FirstPerson.Print();

	system("pause");
	return 0;
}