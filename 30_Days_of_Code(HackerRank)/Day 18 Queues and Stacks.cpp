#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

struct Solution {

    stack<char> s1;
    queue<char> s2;
    void pushCharacter(char ch) {
        s1.push(ch);
    }

    void enqueueCharacter(char ch) {
        s2.push(ch);
    }

    char popCharacter() {
        char x = s1.top();
        s1.pop();
        return x;
    }

    char dequeueCharacter() {
        char x = s2.front();
        s2.pop();
        return x;
    }
};

int main() {
    // read the string s.
    string s;
    getline(cin, s);

    // create the Solution class object p.
    Solution obj;

    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }

    bool isPalindrome = true;

    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;

            break;
        }
    }

    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        cout << "The word, " << s << ", is a palindrome.";
    }
    else {
        cout << "The word, " << s << ", is not a palindrome.";
    }

    return 0;
}