#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> arr(t);
    for(int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i < t; i++)
    {
        int steps = 0;
        int n = arr[i];
        while(true)
        {
            if(n == 2)
            {
                cout << -1 << '\n';
                break;
            }
            else if(n > 2 && n < 6)
            {
                n = n * 2;
                steps++;
            }
            else if(n >= 6 && (n%6 == 0))
            {
                n = n / 6;
                steps++;
            }
            else if(n >= 6 && (n%6 != 0))
            {
                n = n * 2;
                steps++;
            }
            else if(n == 1)
            {
                cout << steps << '\n';
                break;
            }
            else
            {
                cout << -1 << '\n';
                break;
            }
            if(steps > 10000)  
            {
                cout << -1 << '\n';
                break;
            }
        }
    }
    return 0;
}