#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> arr(n);
        ll sum1 = 0;
        ll sum2 = 0;
        for(int i = 0; i < n ; i++)
        {
            cin >> arr[i];
            sum1 += (((arr[i] - 1)/ x) + 1); 
            sum2 += arr[i];
        }
        sum2 = ((sum2 - 1)/ x) + 1;
        if(sum1 <= sum2)
        {
            cout << sum1 << " " << sum2 << endl;
        }
        else
        {
            cout << sum2 << " " << sum1 << endl;
        }
    }
    return 0;
}