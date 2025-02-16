#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> arr(n * k);
        for(long long i = 0; i < n*k; i++)
        {
            cin >> arr[i];
        }
        long long sum_med = 0;
        long long i = n * k;
        while(k--)
        {
            i = i - (n / 2 + 1);
            sum_med += arr[i];
        }
        cout << sum_med << endl;
    }
    return 0;
}