#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s, int start, int end)
{
    while (start < end)
    {
        if (s[start] != s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    string str;
    cin >> str;

    // approach
    // find substring
    // check palindromic and extract
    // and maximum length from all palindromic substrng
    string ans = "";
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = i; j < str.size(); j++)
        {
            if (isPalindrome(str, i, j))
            {
                string t = str.substr(i, j - i + 1);
                ans = t.size() > ans.size() ? t : ans;
            }
        }
    }
    cout << ans;
    // code
    return 0;
}