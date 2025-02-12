#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }   
        sort(arr.begin(), arr.end());
        int maxi = 0;
        int cnt = 0;
        for(int i = 1; i < n; i++)
        {
            if(arr[i] - arr[i - 1] <= k)
            {
                cnt++;
                maxi = max(cnt, maxi);   
            }
            else
            {
                maxi = max(cnt, maxi);
                cnt = 0;
            }
        }    
        cout << n - maxi - 1 << endl;
    }
}