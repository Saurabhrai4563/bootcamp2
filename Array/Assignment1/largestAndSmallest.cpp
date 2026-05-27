#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int k = 0;
        cin >> k;
        arr.push_back(k);
    }

    int sm = INT_MAX;
    int lg = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > lg)
        {
            lg = arr[i];
        }
        if (arr[i] < sm)
        {
            sm = arr[i];
        }
    }

    cout << "Larges : " << lg << endl
         << "Smallest :" << sm << endl;
    // code
    return 0;
}