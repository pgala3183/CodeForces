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
        ll f_min = INT_MAX;
        ll s_min = INT_MAX;
        ll i = 0;
        ll ssum = 0;
        while(n--)
        {
            ll m;
            cin >> m;
            vector<ll> arr(m);
            for(int i = 0; i < m; i++)
            {
                cin >> arr[i];
            }
            sort(arr.begin(), arr.end());
            f_min = min(f_min, arr[0]);
            s_min = min(s_min, arr[1]);
            ssum += arr[1];
            i++; 
        }
        ll sum = ssum + f_min - s_min;
        cout << sum << endl;
    }
    return 0;
}