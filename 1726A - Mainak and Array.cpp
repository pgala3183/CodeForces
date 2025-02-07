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
        vector<int> arr(n + 1);
        for(int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        int ans = arr[n] - arr[1];
        for(int i = 1; i <= n - 1; i++)
        {
            ans = max(ans, arr[n] - arr[i]);
        }
        for(int i = 2; i <= n; i++)
        {
            ans = max(ans, arr[i] - arr[1]);
        }
        for(int i = 1; i <= n - 1; i++)
        {
            ans = max(ans, arr[i] - arr[i + 1]);
        }
        cout << ans << endl;
    }
    return 0;
}