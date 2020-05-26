#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int NofN, X; cin >> NofN;
    bool a;

    for (int i = 0; i < NofN; i++) {
        cin >> X; a = 1;

        if (X <= 1) cout << "Not prime" << endl;

        else {
            for (int i = 2; i <= sqrt(X); i++)
            {
                if (X % i == 0) {
                    cout << "Not prime" << endl;
                    a = false;
                    break;
                }
            }

            if (a) { cout << "Prime" << endl; }

        }

    }

    return 0;
}