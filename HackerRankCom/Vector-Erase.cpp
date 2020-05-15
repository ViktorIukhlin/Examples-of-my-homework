#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int amount;cin >> amount;
    vector<int> numbers(amount);

    for (int i = 0; i < numbers.size(); i++) {
        cin >> numbers[i];
    }

    int a, b;

    cin >> a;
    numbers.erase(numbers.begin() + a - 1);

    cin >> a >> b;

    numbers.erase(numbers.begin() + a - 1, numbers.begin() + b - 1);


    cout << numbers.size() << endl;

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
