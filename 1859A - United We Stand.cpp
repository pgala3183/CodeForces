#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b ,c, d;
        cin >> a >> b >> c >> d;
        long moves = 0;
        if(b > d)
        {
            cout << -1 << endl;
            continue;
        }
        while(b != d)
        {
            a++;
            b++;
            moves++;
        }
        if(a < c)
        {
            cout << -1 << endl;
        }
        else cout << moves + a - c << endl;
    }
    return 0;
}