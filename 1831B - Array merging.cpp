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
        vector<ll> arr1(n), arr2(n);
        set<ll> se;
        for(ll i = 0; i < n; i++)
        {
            cin >> arr1[i];
            se.insert(arr1[i]);
        }
        for(ll i = 0; i < n; i++)
        {
            cin >> arr2[i];
            se.insert(arr2[i]);
        }

        map<ll ,ll> mpp1, mpp2;
        ll cnt = 1;
        mpp1[arr1[0]] = 1;
        for(ll i = 1; i < n; i++)
        {
            if(arr1[i] == arr1[i - 1])
            {
                cnt++;
            }
            else
            {
                cnt = 1;
            }
            mpp1[arr1[i]] = max(mpp1[arr1[i]], cnt);
        }
        cnt = 1;
        mpp2[arr2[0]] = 1;
        for(ll i = 1; i < n; i++)
        {
            if(arr2[i] == arr2[i - 1])
            {
                cnt++;
            }
            else
            {
                cnt = 1;
            }
            mpp2[arr2[i]] = max(mpp2[arr2[i]], cnt);
        }

        ll maxi = 1;
        for(auto x: se)
        {
            maxi = max(maxi, mpp1[x] + mpp2[x]);
        }
        cout << maxi << endl;
    }
    return 0;
}