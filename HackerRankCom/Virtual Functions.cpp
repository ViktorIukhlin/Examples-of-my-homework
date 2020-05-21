#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:

    virtual void getdata() {};
    virtual void putdata() {};
};
/////////////////////////////////////////////////////////////////////////
class Professor : public Person {

protected:
    int publications;
    static int cur_id1;
    int prof_id;

public:

    void getdata() {
        cin >> name >> age >> publications;
        cur_id1++;
        prof_id = cur_id1;
    }

    void putdata() {
        cout << name << " " << age << " " << publications << " " << prof_id << endl;
    }

};
int Professor::cur_id1 = 0;
//////////////////////////////////////////////////////////////////////////
class Student : public Person {

protected:
    int marks[6];
    int sum = 0;
    static int cur_id2;
    int stud_id;

public:

    void getdata() {

        cin >> name >> age;

        for (int i = 0; i < 6; i++)
        {
            cin >> marks[i];
            sum = sum + marks[i];
        }

        cur_id2++;
        stud_id = cur_id2;
    }

    void putdata() {
        cout << name << " " << age << " " << sum << " " << stud_id << endl;
    }

};
int Student::cur_id2 = 0;
int main() {

    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person* per[n];

    for (int i = 0;i < n;i++) {

        cin >> val;
        if (val == 1) {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for (int i = 0;i < n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
