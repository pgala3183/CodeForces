#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long n, q;
        cin >> n >> q;
        long long sum = 0;
        vector<long long> arr(n);
        map<long long, long long> mpp;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            mpp[i + 1] = sum;
        }
        while(q--)
        {
            long long l, r, k;
            cin >> l >> r >> k;
            long long sum_not = mpp[r] - mpp[l - 1];
            long long new_sum = sum - sum_not + (r - l + 1)*k;
            if(new_sum % 2 == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}