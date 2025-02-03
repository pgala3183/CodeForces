#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;
        long long ini = k * (1 + k) / 2;
        long long tot = n * (n + 1) / 2;
        long long temp = n - k;
        long long last = tot - ((temp) * (temp + 1) / 2);
        if(x >= ini && x <= last)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}