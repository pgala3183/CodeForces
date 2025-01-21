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
        vector<int> arr(n);
        int pos = 0;
        int neg = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] > 0) pos++;
            else neg++;
        }
        int steps = 0;
        while(pos < neg || neg % 2 == 1)
        {
            steps++;
            pos++;
            neg--;
        }
        cout << steps << endl;
    }
    return 0;
}