#include <iostream>
#include <cstring>

using namespace std;

void TrimRight(char* s)
{
    int length = strlen(s);

    while (true)
    {
        if (s[--length] == ' ')
            continue;
        break;
    }

    s[length + 1] = '\0';
}

int main()
{
    char somestr[] = "abdsad                                          ";
    TrimRight(somestr);
    cout << somestr;
    return 0;
}