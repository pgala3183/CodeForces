#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if(n - k == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        map<char, int> mpp;
        for(int i = 0; i < n; i++)
        {
            mpp[s[i]]++;
        }
        if(mpp.size() == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        int odd = 0;
        for(const auto& i: mpp)
        {
            if(i.second % 2 == 1) odd ++;
        }
        if(odd-k <= 1)
        {   
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}