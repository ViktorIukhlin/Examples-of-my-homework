#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);



int main() {
    list<string> names;
    int N;
    cin >> N;
    for (int a0 = 0; a0 < N; a0++) {
        string firstName;
        string emailID;
        cin >> firstName >> emailID;
        if (emailID.find("@gmail.com") != std::string::npos) {
            names.push_front(firstName);
        }
    }
    names.sort();
    for (auto& name : names) {
        cout << name << endl;
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