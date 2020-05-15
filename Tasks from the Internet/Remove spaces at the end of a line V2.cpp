#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void TrimRight(char* s)
{
    char* start = s, * end = s;
    while (*end)
    {
        start = end;
        while (*start && !isspace(*start)) ++start;
        end = start;
        while (*end && isspace(*end)) ++end;
    }
    *start = L'\0'; 
}
int main()
{
    char somestr[] = "abc                                                                      ";
    TrimRight(somestr);
    cout << somestr << "!";
    return 0;
}
