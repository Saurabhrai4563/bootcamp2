#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    vector<int> freq(256, 0);
    string ans = "";
    for (char c : s)
    {
        if (freq[c] == 0)
        {
            ans.push_back(c);
            freq[c]++;
        }
    }
    cout << ans << endl;
    // code
    return 0;
}