#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    string studendId;

    getline(cin, name);
    getline(cin, studendId);

    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] = name[i] + 32;
        }
    }
    stringstream ss(name);
    string word;
    string firstName = "";
    string lastName = "";
    bool firstWordFound = false;
    // extract all word
    while (ss >> word)
    {
        if (!firstWordFound)
        {
            firstName = word;
            firstWordFound = true;
        }
        lastName = word;
    }
    string username = firstName + "_" + lastName + studendId;

    cout << username;
    // code
    return 0;
}