#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr;

    int n;
    cin >> n;
    cout << "Enter elements " << n << ":" << endl;
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        cin >> k;
        arr.push_back(k);
    }

    int minIndex = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }

    // deleting

    arr.erase(arr.begin() + minIndex);
    cout << "After deleting min elemnts" << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    // code
    return 0;
}