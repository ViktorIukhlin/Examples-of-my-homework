#include <iostream>
#include <vector>

using namespace std;


class Person {
protected:
    string firstName;
    string lastName;
    int id;
public:
    Person(string firstName, string lastName, int identification) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson() {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << id << "\n";
    }

};

class Student : public Person {
private:
    vector<int> testScores;
public:
    /*
    *   Class Constructor
    *
    *   Parameters:
    *   firstName - A string denoting the Person's first name.
    *   lastName - A string denoting the Person's last name.
    *   id - An integer denoting the Person's ID number.
    *   scores - An array of integers denoting the Person's test scores.
    */
    // Write your constructor here
    Student(string firstName, string lastName, int identification, vector<int> scores) :Person(firstName, lastName, identification) {
        this->testScores = scores;

    }
    /*
    *   Function Name: calculate
    *   Return: A character denoting the grade.
    */
    // Write your function here
    char calculate() {
        char a;int sum = 0;
        for (int i = 0; i < testScores.size(); i++) {
            sum = testScores[i] + sum;
        }
        sum = sum / testScores.size();

        if ((90 <= sum) && (sum <= 100))
            a = 'O';
        else if ((80 <= sum) && (sum < 90))
            a = 'E';
        else if ((70 <= sum) && (sum < 80))
            a = 'A';
        else if ((55 <= sum) && (sum < 70))
            a = 'P';
        else if ((40 <= sum) && (sum < 55))
            a = 'D';
        else
            a = 'T';
        return a;
    }
};

int main() {
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores;
    for (int i = 0; i < numScores; i++) {
        int tmpScore;
        cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student* s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}