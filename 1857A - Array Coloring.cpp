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
        int odd = 0;
        int even = 0;
        for(int i = 0; i < n ;i++)
        {
            cin >> arr[i];
            if(arr[i] % 2 == 1) odd++;
            else even++;
        }
        if(even >= 0 && odd%2 == 0)
        {
            cout << "YES" << endl;
        }
        else if(even == 0 && odd%2 == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}