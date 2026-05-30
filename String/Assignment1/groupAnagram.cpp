#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> strs{"eat", "tea", "tan", "ate", "nat", "bat"};

    map<string, vector<string>> mp;

    for (auto str : strs)
    {
        string s = str;
        sort(s.begin(), s.end());

        mp[s].push_back(str);
        // key--------->value
    }
    vector<vector<string>> ans;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        ans.push_back((*it).second);
    }

    for (const auto &row : ans)
    {
        for (const auto &str : row)
        {
            cout << str << " ";
        }
        cout << endl;
    }

    // code
    return 0;
}