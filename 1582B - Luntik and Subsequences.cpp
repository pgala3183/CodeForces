#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        int cnt1 = 0, cnt0 = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 1) cnt1++;
            if(arr[i] == 0) cnt0++;
        }
        long long ans = cnt1 * pow(2, cnt0);
        cout << ans << endl;
    }
    return 0;
}