#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{0, 0, 1, 1, 2, 2, 2, 0, 2, 1};

    int n = arr.size();

    int low = 0;
    int mid = 0;
    int high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }

    for (auto it : arr)
    {
        cout << it << " ";
    }
    // code
    return 0;
}