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
        string s;
        cin >> s;
        int i = 0;
        bool isThree = false;
        int steps = 0;
        while(i < n)
        {
            if(s[i] == '#')
            {
                i++;
            }
            else
            {
                int count = 0;
                while((s[i] != '#') && (i < n)) 
                {
                    count++;
                    i++;
                }    
                if(isThree == false && count >= 3)
                {
                    steps = 2;
                    count = 0;
                    isThree = true;
                }
                else if(count < 3 && isThree == false)
                {
                    steps += count;
                    count = 0;
                }
                else
                {
                    continue;
                }
            }
        }
        cout << steps << endl;
    }
    return 0;
}