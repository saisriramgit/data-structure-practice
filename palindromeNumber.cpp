//Palindrome
#include <iostream>
#include <string>
using namespace std;

string palindrome(string s) {
    int i = 0;
    int j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            return "No";
        }
        i++;
        j--;
    }
    return "Yes";
}

int main() {
    string s = "abcdcbad";
    cout << palindrome(s);
    return 0;
}