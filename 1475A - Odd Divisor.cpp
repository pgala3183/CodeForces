#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        if(n % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            while(n % 2 != 1)
            {
                if(n == 2)
                {
                    cout << "NO" << endl;
                    break;
                }
                n = n / 2;
            }
            if(n % 2 == 1) cout << "YES" << endl;
        }
    }
    return 0;
}