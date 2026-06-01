#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n;
    char dir;

    getline(cin, s);
    cin >> n >> dir;

    int len = s.length();
    n %= len;

    string rotate;

    if (dir == 'L')
    {
        rotate = s.substr(n) + s.substr(0, n);
    }
    else if (dir == 'R')
    {
        rotate = s.substr(len - n) + s.substr(0, len - n);
    }

    cout << rotate << endl;

    return 0;
}