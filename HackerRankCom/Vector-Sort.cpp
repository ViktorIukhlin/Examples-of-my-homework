#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int numberOfdigits;cin >> numberOfdigits;

    vector<int> digits(numberOfdigits);

    for (int i = 0; i < numberOfdigits; i++) {
        cin >> digits[i];
    }

    sort(digits.begin(), digits.end());

    for (int i = 0; i < numberOfdigits; i++) {
        cout << digits[i] << " ";
    }
    return 0;
}
