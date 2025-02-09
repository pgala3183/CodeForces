#include<bits/stdc++.h>
using namespace std;

int main()
{
    long t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<long> arr(n);
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int cnt = 0;
        for(int i = n - 2; i >= 0; i--)
        {
            if(arr[i + 1] <= 0)
            {
                cnt = -1;
                break;
            }
            while(arr[i] >= arr[i + 1])
            {
                arr[i] /= 2;
                cnt++; 
            }
        }
        cout << cnt << endl;
    }
}