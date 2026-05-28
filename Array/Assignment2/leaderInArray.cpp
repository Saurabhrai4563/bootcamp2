#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr{10, 22, 12, 3, 0, 6};
    vector<int> ans;

    int n = arr.size();
    // brute force
    // for (int i = 0; i < n; i++)
    // {
    //     bool isLeader = true;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[j] > arr[i])
    //         {
    //             isLeader = false;
    //             break;
    //         }
    //     }
    //     if (isLeader)
    //     {
    //         ans.push_back(arr[i]);
    //     }
    // }
    // for (auto it : ans)
    // {
    //     cout << it << " ";
    // }

    // optimal

    int maxi = INT_MIN;

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
            ans.push_back(arr[i]);
            maxi = arr[i];
        }
    }

    reverse(arr.begin(), arr.end());
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}