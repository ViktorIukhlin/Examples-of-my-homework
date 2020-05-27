#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int day, month, year; cin >> day >> month >> year;

    int dayCheck, monthCheck, yearCheck;cin >> dayCheck >> monthCheck >> yearCheck;

    int Hackos = 0;

    if (year > yearCheck) { Hackos = 10000; }

    else if ((month > monthCheck) && (year == yearCheck)) { Hackos = Hackos + ((month - monthCheck) * 500); }

    else if ((day > dayCheck) && (month == monthCheck) && (year == yearCheck)) { Hackos = Hackos + ((day - dayCheck) * 15); }

    cout << Hackos << endl;

    return 0;
}
