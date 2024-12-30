#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> words(n);
    for(int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        if(word.length() <= 10)
        {
            words[i] = word;
        }
        else
        {
            int len = word.length();
            words[i] = word[0] + to_string(len - 2) + word[len - 1];
        }
    } 
    for(const auto& word : words)
    {
        cout << word << endl;
    }
    return 0;

}