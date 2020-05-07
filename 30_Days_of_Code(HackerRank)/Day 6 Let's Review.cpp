#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int numberOfRequests;
    string word;
    cin >> numberOfRequests;

    for (int i = 0; i < numberOfRequests; i++) {
        cin >> word;
        for (int j = 0; j < word.size(); j++) {         //or word.length()
            if ((j % 2) == 0) { cout << word[j]; }
        }
        cout << " ";
        for (int j = 0; j < word.size(); j++) {
            if ((j % 2) == 1) { cout << word[j]; }
        }
        cout << endl;
    }


    return 0;
}
