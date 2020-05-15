#include <iostream>
#include <cstring>

using namespace std;

void TrimRight(char* s)
{
    if (!s) return;  
    char* frs = s;  
    for (; *s; ++s)
        if (*s != ' ')
            frs = s + 1;
    *frs = 0;       
}

int main()
{
    char somestr[] = "abc                                                                      ";
    TrimRight(somestr);
    cout << somestr;
    system("pause");
    return 0;
}