#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        string s;
        cin >> s; 
        transform(s.begin(), s.end(), back_inserter(v), [](char c) { return c - '0'; });
        int start = 0;
        int end = n - 1;
        int leng = n;
        while(end >= start)
        {
            if((v[start] == 1 && v[end] == 0) || (v[start] == 0 && v[end] == 1))
            {
                start++;
                end--;
                leng = leng - 2;
            }
            else
            {
                cout << leng << endl;
                break;
            }
        }
        if(start > end)
        {
            cout << 0 << endl;
        }
    }
    return 0;
}