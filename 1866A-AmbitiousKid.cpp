#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mini = INT_MAX;
    int x = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if(abs(x) < mini)
        {
            mini = abs(x);
        }
    }
    cout << mini;
    return 0;
}