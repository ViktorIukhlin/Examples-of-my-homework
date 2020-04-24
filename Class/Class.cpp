#include <iostream>
#include <string>
using namespace std;

class Human
{
public:

	int age;
	int weight;
	string name;

	void Print()
	{
		cout << "Name: " << name << "\n" << "Age: " << age << "\n" << "Weight: " << weight<<endl<<endl;
	}
};




int main()
{
	Human FirstPerson;

	FirstPerson.age = 25;
	FirstPerson.weight = 80;
	FirstPerson.name = "Vanya";
	
	FirstPerson.Print();

	system("pause");
	return 0;
}
