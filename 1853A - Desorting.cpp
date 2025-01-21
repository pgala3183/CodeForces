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
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if(!is_sorted(arr.begin(), arr.end()))
        {
            cout << 0 << endl;
            continue;
        }
        int mini = INT_MAX;
        for(int i = 1; i < n; i++)
        {
            mini = min(mini, arr[i] - arr[i - 1]);
        }
        cout << mini / 2 + 1 << endl;
    }
    return 0;
}