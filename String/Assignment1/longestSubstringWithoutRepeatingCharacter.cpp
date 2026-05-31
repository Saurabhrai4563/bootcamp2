#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;

    cin >> str;

    string ans = "";
    for (int i = 0; i < str.size(); i++)
    {
        int hash[26] = {0};
        for (int j = i; j < str.size(); j++)
        {
            if (hash[str[j] - 'a'] == 1)
            {
                break;
            }
            string t = str.substr(i, j - i + 1);
            ans = t.size() > ans.size() ? t : ans;

            hash[str[j] - 'a'] = 1;
        }
    }
    cout << ans;
    // code
    return 0;
}