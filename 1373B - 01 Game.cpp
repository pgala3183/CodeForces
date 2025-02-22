#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        map<char, ll> mpp;
        for(ll i = 0; i < str.length(); i++)
        {
            mpp[str[i]]++;
        }
        if(mpp['0'] == 0 || mpp['1'] == 0)
        {
            cout << "NET" << endl;
            continue;
        }
        ll cnt = 2 * min(mpp['0'], mpp['1']);
        if(cnt % 4 == 0)
        {
            cout << "NET" << endl;
        }
        else
        {
            cout << "DA" << endl;
        }
    }
    return 0;
}