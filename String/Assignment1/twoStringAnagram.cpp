#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    vector<int> freq(256, 0);
    if (s1.length() != s2.length())
    {
        cout << s1 << " and " << s2 << " are not anagram";
        exit(0);
    }
    for (int i = 0; i < s1.length(); i++)
    {
        freq[s1[i]]++;
    }

    for (int i = 0; i < s2.length(); i++)
    {
        freq[s2[i]]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (freq[i] != 0)
        {
            cout << s1 << " and " << s2 << " are not anagram";
            exit(0);
        }
    }
    cout << s1 << " and " << s2 << " are anagram";
    // code
    return 0;
}