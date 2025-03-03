#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        ll zeros = 0;
        ll ones = 0;
        string ans = "";
        ll cost = 0;
        for(ll i = 0; i < str.size(); i++)
        {
            if(str[i] == '0') 
            {
                zeros++;
            }
            else 
            {
                ones++;
            }    
        }
        if(zeros == ones)
        {
            cout << 0 << endl;
        }
        else
        {
            cost += abs(zeros - ones);
            if(zeros > ones) zeros = ones;
            else ones = zeros;
            ll itr = zeros;
            for(ll i = 0; i < str.size(); i++)
            {
                if(str[i] == '0' && ones > 0)
                {
                    ans.push_back('1');
                    ones--;
                }
                else if(str[i] == '1' && zeros > 0)
                {
                    ans.push_back('0');
                    zeros--;
                }
                else if(str[i] == '0' && ones == 0 || str[i] == '1' && zeros == 0)
                {
                    cost += zeros + ones;
                    zeros = 0, ones = 0;
                    break;
                }
            }
            cout << cost << endl;
        }
    }
}