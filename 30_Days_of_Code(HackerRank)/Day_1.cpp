#include <iostream>
#include <iomanip>
#include <limits>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int first;
    double two;
    string three;

    cin >> first;
    cin >> two;
    getline(cin >> ws, three);
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.

    // Print the sum of both integer variables on a new line.
    cout << i + first << endl;
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << d + two << endl;
    printf("%.1lf", (d + two),"/n");
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s << three << endl;

    return 0;
}