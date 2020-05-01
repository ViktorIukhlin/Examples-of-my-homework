#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int NumberOfArray, NumberOfQueries, NumberOfElements;
    cout << "Number of Array =";
    cin >> NumberOfArray;
    cout << "Number of Queries =";
    cin >> NumberOfQueries;
    int** arr = new int *[NumberOfArray];

    for (int i = 0; i < NumberOfArray; i++)
    {
        cout << "Number of Elements in Array " << i<< " =";
        cin >> NumberOfElements;
        arr[i] = new int[NumberOfElements];

        for (int j = 0; j < NumberOfElements; j++)
        {
            int a;cout << "Give a number arr " << i << j <<" =" ; cin >> a;
            arr[i][j] = a;
        }
    }
    
    for (int g = 0; g < NumberOfQueries; g++)
    {
        cout << "What number from Array " << g << " print =";
        int b; cin >> b;

        cout << arr[g][b] << endl;
    }

    for (int t = 0; t < NumberOfArray; t++)
    {
        delete[] arr[t];
    }
   
    system("pause");
    return 0;
}