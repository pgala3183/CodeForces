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
        int xorARR = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            xorARR = xorARR xor arr[i];
        }
        if(n % 2 == 0)
        {
            if(xorARR == 0)
            {
                cout << 7 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            cout << xorARR << endl;
        }
    }
    return 0;
}