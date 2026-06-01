#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;

    unordered_map<char, int> mp;

    for (char ch : str)
    {
        mp[ch]++;
    }

    char c;

    for (char ch : str)
    {
        if (mp[ch] == 1)
        {
            cout << ch << endl;
            return 0;
        }
    }
    cout << "No unique character found" << endl;
    // code
    return 0;
}