#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long k;
    cin >> k;
    long long odd = (n + 1) / 2;
    if(odd >= k)
    {
        cout << (2*k - 1);
    }
    else
    {
        cout << 2*(k - odd);
    }
}