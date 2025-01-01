#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> mpp(n, vector<int>(3));
    int yes = 0;
    for(int i = 0; i < n; i++)
    {
        int cnt = 0;
        for(int j = 0; j < 3; j++)
        {
            cin >> mpp[i][j];
            if(mpp[i][j] == 1)
            {
                cnt++;
            }
        }
        if(cnt >= 2) yes++;
    }
    cout << yes;
}