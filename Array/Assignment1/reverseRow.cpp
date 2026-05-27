#include <bits/stdc++.h>
using namespace std;
void print(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    print(arr);
    cout << "Printing Reverse" << endl;
    for (int i = 0; i < 3 / 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            swap(arr[i][j], arr[3 - i - 1][j]);
        }
    }
    print(arr);
    // code
    return 0;
}