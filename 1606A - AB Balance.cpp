#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        if(str[0] == str[str.length() - 1])
        {
            cout << str << endl;
        }
        else
        {
            str[0] = str[str.length() - 1];
            cout << str << endl;
        }
    }
    return 0;
}