#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll cc(ll count, ll k)
{
    if (count < k) return 0;
    return (count - k + 1) * (count - k + 2) / 2; 
}

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> arr(n);
        for(ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll cnt = 0;
        ll i = 0;
        while(i < n)
        {
            if(arr[i] > q)
            {
                i++;
            }
            else
            {
                ll j = i + 1;
                ll count = 1;
                while(arr[j] <= q && j < n)
                {
                    count++;
                    j++;
                }
                cnt += cc(count, k);
                i = j;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}