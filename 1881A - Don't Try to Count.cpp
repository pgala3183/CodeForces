#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        string x, s;
        cin >> n >> m >> x >> s;
        int cnt = -1;
        for(int i = 0; i <= 6; i++)
        {
            if(x.find(s) != std::string::npos)
            {
                cnt = i;
                break;
            }
            x = x + x;
        }
        cout << cnt << endl;
    }
    return 0;
}