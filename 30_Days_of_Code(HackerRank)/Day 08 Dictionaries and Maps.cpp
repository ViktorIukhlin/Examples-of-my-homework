#include <cmath>
#include <cstdio>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {

    map <string, string> phoneNumber;

    int n; cin >> n;
    string a;
    string b;

    for (int i = 0; i < n; i++) {
        cin >> a;cin >> b;
        phoneNumber[a] = b;
    }
    
    map <string, string> ::iterator it;
    string name;

    while (cin >> name)
    {
        it = phoneNumber.find(name);

        if (it == phoneNumber.end()) {
            cout << "Not found" << endl;
        }
        else { cout << name << "=" << it->second << endl; }
    }

    system("pause");
    return 0;
}
