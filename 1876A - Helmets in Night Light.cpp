#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, p;
        cin >> n >> p;
        vector<pair<ll ,ll>> arr(n);
        for(ll i = 0; i < n; i++)
        {
            cin >> arr[i].second;
        }
        for(ll i = 0; i < n; i++)
        {
            cin >> arr[i].first;
        }
        sort(arr.begin(), arr.end());
        ll cost = p;
        ll citi = 1;
        ll i = 0;
        while (citi < n )
        {
            if(n >= citi + arr[i].second)
            {
                cost += (min(arr[i].first, p) * arr[i].second);
                citi += arr[i].second;
                i++;
            }
            else
            {
                cost += (n - citi) * min(p, arr[i].first);
                citi = n;
            }
        }
        cout << cost << endl;
    }
}