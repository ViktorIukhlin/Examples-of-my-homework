#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int NumberOfQuestion;cin >> NumberOfQuestion;
    int mark = 0, key; string name;

    map<string, int>List;
    map <string, int> ::iterator it;

    for (int i = 0;i < NumberOfQuestion; i++) {
        cin >> key;

        switch (key)
        {
        case 1:
            cin >> name;cin >> mark;
            it = List.find(name);

            if (it == List.end())
                List.insert(make_pair(name, mark));
            else
                it->second += mark;

            break;

        case 2:
            cin >> name;
            List.erase(name);

            break;

        case 3:
            cin >> name;
            it = List.find(name);

            if (it == List.end())
                cout << '0' << endl;
            else
                cout << it->second << endl;

            break;

        default:
            break;
        }
    }


    return 0;
}

