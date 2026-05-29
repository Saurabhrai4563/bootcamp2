#include <bits/stdc++.h>
using namespace std;
int main()
{
    string text;
    getline(cin, text);
    string reverseWord = "";

    for (int i = text.length() - 1; i >= 0; i--)
    {
        reverseWord += text[i];
    }
    if (text == reverseWord)
    {
        cout << text << " is palindrome";
    }
    else
    {
        cout << text << " is not palindrome";
    }
    // code
    return 0;
}