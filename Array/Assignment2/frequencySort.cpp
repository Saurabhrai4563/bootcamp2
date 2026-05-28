#include <bits/stdc++.h>
using namespace std;

bool cmp(std::pair<int, int> a, std::pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}
int main()
{
    vector<int> arr{4, 5, 6, 5, 4, 3};
    unordered_map<int, int> mpp;

    for (int it : arr)
    {
        mpp[it]++;
    }
    vector<pair<int, int>> temp;

    for (auto it : mpp)
    {
        temp.push_back({it.first, it.second});
    }
    // custom comprator -- > through which we can change the process of
    sort(temp.begin(), temp.end(), cmp);

    for (auto it : temp)
    {
        for (int i = 0; i < it.second; i++)
        {
            cout << it.first << " ";
        }
    }
    // code
    return 0;
}