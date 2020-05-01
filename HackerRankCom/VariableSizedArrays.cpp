#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int NumberOfArray, NumberOfQueries, NumberOfElements;
    cin >> NumberOfArray;
    cin >> NumberOfQueries;
    int** arr = new int* [NumberOfArray];

    for (int i = 0; i < NumberOfArray; i++)
    {
        cin >> NumberOfElements;
        arr[i] = new int[NumberOfElements];

        for (int j = 0; j < NumberOfElements; j++)
        {
            int a;cin >> a;
            arr[i][j] = a;
        }
    }

    for (int g = 0; g < NumberOfQueries; g++)
    {
        int b, c; cin >> b >> c;

        cout << arr[b][c] << endl;
    }

    for (int t = 0; t < NumberOfArray; t++)
    {
        delete[] arr[t];
    }

    system("pause");
    return 0;
}