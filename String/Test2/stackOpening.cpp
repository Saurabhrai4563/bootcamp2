#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    stack<int> numberStack;
    stack<string> stringStack;
    int num = 0;
    string curr = "";
    for (char ch : s)
    {
        if (isdigit(ch))
        {
            num = num * 10 + (ch - '0');
        }
        else if (ch == '[')
        {
            numberStack.push(num);
            stringStack.push(curr);
            num = 0;
            curr = "";
        }
        else if (ch == ']')
        {
            int repeat = numberStack.top();
            numberStack.pop();
            string prev = stringStack.top();
            stringStack.pop();
            string temp = "";
            for (int i = 0; i < repeat; i++)
            {
                temp += curr;
            }
            curr = prev + temp;
        }
        else
        {
            curr += ch;
        }
    }
    cout << curr;

    // code
    return 0;
}