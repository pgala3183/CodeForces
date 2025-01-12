#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> points ={   {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
                                    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                                    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                                    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                                    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                                    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
                                    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
                                    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
                                    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
                                    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
                                };
    int t;
    cin >> t;
    while(t--)
    {
        int pts = 0;
        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {
                char inp;
                cin >> inp;
                if(inp == 'X')
                {
                    pts += points[i][j];
                } 
            }
        }
        cout << pts << endl;
    }
    return 0;
}