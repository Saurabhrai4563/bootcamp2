#include <bits/stdc++.h>
using namespace std;
int solve(string &a, string &b, int i, int j, vector<vector<int>> &dp)
{
    // base case
    if (i == a.size())
    {
        return 0;
    }
    if (j == b.size())
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int ans = 0;
    if (a[i] == b[j])
    {
        ans = 1 + solve(a, b, i + 1, j + 1, dp);
    }
    else
    {
        ans = max(solve(a, b, i + 1, j, dp), solve(a, b, i, j + 1, dp));
    }
    return dp[i][j] = ans;
}
int main()
{

    string s1, s2;
    cin >> s1 >> s2;
    vector<vector<int>> dp(s1.length(), vector<int>(s2.length(), -1));
    int ans = solve(s1, s2, 0, 0, dp);
    cout << ans;
    // code
    return 0;
}