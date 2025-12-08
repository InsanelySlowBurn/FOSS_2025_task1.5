#include <iostream>
using namespace std;

int main()
{
    string s, t;
    cin >> s;
    t = s;
    for (int i = s.length() - 1; i != -1; i--)
        t[s.length() - 1 - i] = s[i];
    if (t == s)
        cout << "Palindrome" << endl;
    else
        cout << "Not palindrom" << endl;
}