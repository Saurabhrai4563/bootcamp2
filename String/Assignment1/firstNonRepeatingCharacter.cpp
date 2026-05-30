#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    unordered_map<int, int> mpp;

    for (char c : s)
    {
        mpp[c - 'a']++;
    }

    for (char c : s)
    {
        if (mpp[c - 'a'] == 1)
        {
            cout << c;
            break;
        }
    }
    // code
    return 0;
}