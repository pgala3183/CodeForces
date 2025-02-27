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
        vector<ll> arr(n);
        for(ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll i = 0;
        ll j = n - 1;
        while(i < n && arr[i] == 0) i++;
        while(j >=0 && arr[j] == 0) j--;
        if(i > j) cout << 0 << endl;
        else if(count(begin(arr) + i, begin(arr) + j + 1, 0) == 0)cout << 1 << endl;
        else cout << 2 << endl;
    }
    return 0;
}