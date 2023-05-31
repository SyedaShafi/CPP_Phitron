#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int n;
    cin >> n;
    int freq[26] = {0};
    char ch;
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        freq[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
        {
            for (int j = 0; j < freq[i]; j++)
                cout << char(i + 'a');
        }
    }
}