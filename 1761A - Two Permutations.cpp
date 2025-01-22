#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        
        if(a + b >= n)
        {
            if(a == n && b == n)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            int temp = n - a - b;
            if(temp > 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}