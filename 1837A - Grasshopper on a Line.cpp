#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, k;
        cin >> x >> k;
        int remaining = x;  // Track remaining distance
        int cnt = 0;
        vector<int> ans;
        
        while(remaining > 0)
        {
            if(remaining < k)
            {
                cnt++;
                ans.push_back(remaining);
                remaining = 0;
            }
            else if(remaining % k != 0)
            {
                cnt++;
                ans.push_back(remaining);
                remaining = 0;
            }
            else if((remaining-1) % k != 0)
            {
                cnt++;
                ans.push_back(1);
                remaining -= 1;
            }
            else
            {
                cnt++;
                ans.push_back(2);
                remaining -= 2;
            }
        }
        
        cout << cnt << endl;
        for(int i = 0; i < ans.size(); i++) {
            cout << ans[i];
            if(i < ans.size() - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}