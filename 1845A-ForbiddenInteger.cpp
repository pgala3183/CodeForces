#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k, x;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> n >> k >> x;
        if(x != 1)
        {
            cout << "YES" << endl;
            cout << n << endl;
            for(int i = 0; i < n; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else if((n%2 && k == 2) || k == 1)
        {
            cout << "NO" << endl;
        } 
        else
        {
            cout << "YES" << endl;
            cout << n / 2 << endl;
            for(int i = 0; i < (n / 2) - 1; i++)
            {
                cout << 2 << " ";
            }
            cout << 2 + (n % 2) << endl;
        }
    }
    return 0;
}