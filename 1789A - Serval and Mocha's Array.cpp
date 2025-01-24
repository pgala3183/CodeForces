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
        int g = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                g = min(__gcd(arr[i], arr[j]), g);
            }
        }
        if(g > 2) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}