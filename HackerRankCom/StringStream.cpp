#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    int b = 0;

    for (int i = 0; i < str.size(); i++) {   
        if (str[i] == ',')
            b++;//number of commas
    }
    const int a = b + 1; //number of numbers

    char ch;
    int* arr = new int[a];
    for (int i = 0; i < a; i++) {   //array filling
        ss >> arr[i] >> ch;
    }

    vector<int> answer;            // < vector
    for (int j = 0; j < a; j++) {  
        answer.push_back(arr[j]);
    }                             //      creation >

    return { answer };
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}