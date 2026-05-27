#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input

    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            count++;
        }
    }
    cout << "Number of consonant :" << count << endl;
    // code
    return 0;
}