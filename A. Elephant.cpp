#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int minSteps = 0;
    while(x > 0)
    {
        if(x == 1 || x == 2 || x == 3 || x == 4 || x == 5)
        {
            minSteps++;
            break;
        }
        else if(x > 5)
        {
            x -= 5;
            minSteps++;
        }
    }
    cout << minSteps;
    return 0;
}