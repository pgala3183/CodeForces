#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, x_k, y_k, x_q, y_q;
        cin >> a >> b >> x_k >> y_k >> x_q >> y_q;
        vector<pair<int, int>> directions = {{a, b}, {a, -b}, {-a, b}, {-a, -b},
                                               {b, a}, {b, -a}, {-b, a}, {-b, -a}};
        set<pair<int, int>> st1;
        set<pair<int, int>> st2;
        for(auto d: directions)
        {
            int x = x_k + d.first;
            int y = y_k + d.second;
            st1.insert(make_pair(x, y));

            x = x_q + d.first;
            y = y_q + d.second;
            st2.insert(make_pair(x, y));
        }
        int ans = 0;
        for(auto p: st1)
        {
            if(st2.find(p) != st2.end())
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}