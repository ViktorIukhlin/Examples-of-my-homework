#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int quantity;
    cin >> quantity;

    vector<int> numbers(quantity);

    for (int i = 0; i < quantity; ++i) 
        cin >> numbers[i];
    
    int length; cin >> length;

    for (int j = 0; j < length; ++j) {
        int query; cin >> query;

        auto lowerBoundIt = lower_bound(numbers.cbegin(), numbers.cend(), query);
        if (*lowerBoundIt == query) {
            cout << "Yes ";
        }
        else {
            cout << "No ";
        }
        cout << distance(numbers.cbegin(), lowerBoundIt) + 1 << '\n';
    }
}


