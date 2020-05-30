#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);



int main()
{
    int T, n, k, i, j, val;
    scanf("%d", &T);
    while (T > 0)
    {
        int maximum = 0;
        scanf("%d%d", &n, &k);
        int max_val = 0;
        int a = 0, b = k - 1;

        for (a = n; a > 2; a--)
        {
            if (a == b)
                continue;
            if ((a & b) > max_val)
            {
                max_val = a & b;
            }
        }

        printf("%d\n", max_val);

        T--;
    }
    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char& x, const char& y) {
        return x == y and x == ' ';
        });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
