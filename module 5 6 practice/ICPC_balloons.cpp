#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int freq[26] = {0};
        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 'A']++;
        }
        int ans = 0, cnt = 0;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0)
                cnt++;
            ans += freq[i];
        }
        cout << ans + cnt << "\n";
    }
}