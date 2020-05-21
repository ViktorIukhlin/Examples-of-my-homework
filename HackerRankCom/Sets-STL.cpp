#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int>s;
    int numberOfCommand;
    int n;cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> numberOfCommand;
        set<int>::iterator itr;

        switch (numberOfCommand)
        {
        case 1:
            int x; cin >> x;
            s.insert(x);
            break;

        case 2:
            cin >> x;
            s.erase(x);
            break;

        case 3:
            int val; cin >> val;
            itr = s.find(val);

            if (itr == s.end())
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
            break;

        default:
            break;

        }

    }
    return 0;
}





