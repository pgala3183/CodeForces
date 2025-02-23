#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        ll n1 = str1.size();
        ll n2 = str2.size();
        map<char, ll> m1, m2;
        for(auto ch: str1)
        {
            m1[ch]++;
        }
        for(auto ch: str2)
        {
            m2[ch]++;
        }
        ll i = 0, j = 0;
        while(i < n1 && j < n2)
        {
            if(str1[i] == str2[j])
            {
                if(m1[str1[i]] < m2[str2[j]])
                {
                    break;
                }
                if(m1[str1[i]] == m2[str2[j]])
                {
                    m2[str2[j]]--;
                    j++;
                }
            }
            m1[str1[i]]--;
            i++;
        }
        if(j == n2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}