#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        map<ll, ll>mpp;
        for(int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            mpp[x]++;
        }
        ll maxi = 0;
        for(auto x: mpp)
        {
            maxi = max(maxi, x.second);
        }
        ll ans = n - maxi;
        ll ops = 0;
        while(maxi < n)
        {
            maxi *= 2;
            ops++;
        }
        cout << ops + ans << endl;    
    }
}