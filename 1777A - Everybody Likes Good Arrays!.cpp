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
        int cnt = 0;
        int par = arr[0] % 2;
        if(par == 0) par = 1;
        else par = 0;
        for(int i = 1; i < n; i++)
        {
            if(arr[i] % 2 == par) 
            {
                if(par == 1) par = 0;
                else par = 1;
                continue;
            }
            else
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}