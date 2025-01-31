#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string num;
        cin >> num;
        int siz = num.size();
        int end = siz;

        // Try to find any pair (i, j) that forms a multiple of 25
        for (int i = 0; i < siz; i++)
        {
            for (int j = i + 1; j < siz; j++)
            {
                int twoDigit = (num[i] - '0') * 10 + (num[j] - '0');
                if (twoDigit % 25 == 0)
                {
                    int moves = (siz - j - 1) + (j - i - 1);
                    end = min(end, moves);
                }
            }
        }
        cout << end << endl;
    }
    return 0;
}
