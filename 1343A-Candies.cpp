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
        int x = 1;
        int s = 1;
        for(int i = 0; i < n; i++)
        {
            if(n % s == 0 && i > 0)
            {
                cout << n / s << '\n';
                break;
            }
            else
            {
                x *= 2;
                s += x;
            }
        }
    }
    return 0;
}