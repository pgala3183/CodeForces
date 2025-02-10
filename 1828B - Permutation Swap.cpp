#include<bits/stdc++.h>
using namespace std;

long gcd(long a, long b){return (b == 0) ? a : gcd(b, a % b);}

int main()
{
    long t;
    cin >> t;
    while(t--)
    {
        long n;
        cin >> n;
        long g = 0;
        for(long i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if(abs(x - i) > 0)
            {
                g = gcd(g, abs(x - i));
            }
        }
        cout << g << endl;
    }
    return 0;
}