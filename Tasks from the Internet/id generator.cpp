#include <iostream>
 
using namespace std;

class People {
public:
    static int numberOfPeople;
    People(string name, string lastName)
    {
        numberOfPeople++;
        id = numberOfPeople;
        this->name = name;
        this->lastName = lastName;
    }
    
    int GetId() {
        return id;
    };
    int id;
    string name, lastName;
};
int People::numberOfPeople = 0;

int main()
{
    People first( "Ivan", "Ivanow");
    People second("Ivan", "Ivanow");
    cout << first.GetId() <<". "<<first.name << first.lastName <<endl;
    cout << second.GetId() <<". "<< second.name << second.lastName << endl;

    return 0;
}
