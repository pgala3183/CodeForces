#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long a, b;
        cin >> a >> b;
        if(b > a) swap(a, b);
        long long diff = a - b;
        if(diff == 0)
        {
            cout << 0 << " " << 0 << endl;
        } 
        else
        {
            long long moves = min(b % diff, diff - (b % diff));
            cout << diff << " " << moves << endl;
        }
    }
    return 0;
}