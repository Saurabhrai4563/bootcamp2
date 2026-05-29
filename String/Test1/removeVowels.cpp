#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string ans = "";
    string vowels = "aeiouAEIOU";
    for (int i = 0; i < s.length(); i++)
    {
        if (vowels.find(s[i]) == string::npos)
        {
            ans += s[i];
        }
    }
    cout << ans;
    return 0;
}