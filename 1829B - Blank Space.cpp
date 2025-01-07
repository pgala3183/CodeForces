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
        int arr;
        int longest = 0, cnt = 0; 
        while(n--)
        {
            cin >> arr;
            if(arr == 0)
            {
                cnt++;
                longest = max(longest, cnt);
            }
            else
            {
                cnt = 0;
            }
        }
        cout << longest << endl;
    }
    return 0;
}