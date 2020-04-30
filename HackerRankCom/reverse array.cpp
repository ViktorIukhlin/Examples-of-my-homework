#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    cin >> size;

    int* array = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    for (int j = (size - 1); j >= 0; j--)
    {
        cout << array[j] << " ";
    }

    delete[] array;
    return 0;
}
