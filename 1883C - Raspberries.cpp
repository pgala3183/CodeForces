#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        ll mini = INT_MAX;
        ll eve = 0;
        for(ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if(x % 2 == 0) eve++;
            if(x % k == 0)
            {
                mini = 0;
            }
            ll val = abs(k - x % k);
            mini = min(mini, val);
        }
        ll fourr = 2;
        ll onee = 1;
        if(k == 4)
        {
            if(eve >= 2)
            {
                mini = 0;
            }
            if(eve == 0)
            {
                mini = min(mini, fourr);
            }
            if(eve == 1)
            {
                mini = min(mini, onee);
            }
        }
        cout << mini << endl;
    }
    return 0;
}