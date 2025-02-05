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
        string str;
        cin >> str;
        int curr = 1;
        int cnt = 1;
        for(int i = 1; i < n; i++)
        {
            if(str[i] == str[i - 1])
            {
                curr++;
                cnt = max(cnt, curr);
            }
            else
            {
                curr = 1;
            }
        }
        cout << cnt + 1 << endl;
    }
    return 0;
}