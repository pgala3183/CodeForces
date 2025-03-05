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
        vector<pair<ll, ll>> arr;
        for(ll i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            x = x % k;
            if(x == 0)
            {
                x = x + k;
            }
            arr.push_back({-x, i});
        }
        sort(arr.begin(), arr.end());
        for(auto x: arr)
        {
            cout << x.second + 1 << " ";
        }
        cout << endl;
    }
}