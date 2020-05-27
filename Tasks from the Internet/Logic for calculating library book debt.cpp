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

    //////////////////////
    if (year > yearCheck) { Hackos = Hackos + ((year - yearCheck) * 10000); }
    //////////////////////
    if ((year > yearCheck) && (month != monthCheck)) { Hackos = Hackos + (fabs(month - monthCheck) * 500); }

    else if ((year == yearCheck) && (month > monthCheck)) { Hackos = Hackos + ((month - monthCheck) * 500); }
    //////////////////////
    if ((year > yearCheck) && (day != dayCheck)) { Hackos = Hackos + (fabs(day - dayCheck) * 15); }

    else if ((year == yearCheck) && (month > monthCheck) && (day != dayCheck)) { Hackos = Hackos + (fabs(day - dayCheck) * 15); }

    else if ((year == yearCheck) && (month == monthCheck) && (day > dayCheck)) { Hackos = Hackos + ((day - dayCheck) * 15); }
    /////////////////////

    cout << Hackos << endl;

    return 0;
}
