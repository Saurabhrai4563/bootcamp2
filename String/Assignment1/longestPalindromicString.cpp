#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string &s)
{
    string rev = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        rev += s[i];
    }

    return (s == rev);
}
int main()
{

    vector<string> strs{"abcdefghgfedcba", "om", "abcdcb", "helle"};
    int res = INT_MIN;
    string ans;
    for (int i = 0; i < strs.size(); i++)
    {
        if (isPalindrome(strs[i]))
        {
            if ((int)strs[i].size() > res)
            {
                ans = strs[i];
                res = (int)strs[i].length();
            }
        }
    }
    if (ans == "")
    {
        cout << "No longest palindromic string" << endl;
    }
    else
        cout << "Longest palindromic string is " << ans << endl;

    // code
    return 0;
}