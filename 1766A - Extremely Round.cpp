#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> arr;
    for(int i = 1; i <= 999999; i*=10)
    {
        for(int j = 1; j < 10; j++)
        {
            arr.push_back(i * j);
        }
    }
    while(t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        for(int i = 0; i < arr.size(); i++)
        {
            if(n >= arr[i])
            {
                ans++;
            }
            else{
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}