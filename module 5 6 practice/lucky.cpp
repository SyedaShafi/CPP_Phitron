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
        string s;
        cin >> s;
        int f = 0, l = 0;
        for (int i = 0; i < 3; i++)
        {
            f += (s[i] - '0');
        }
        for (int i = 3; i < 6; i++)
        {
            l += (s[i] - '0');
        }
        if (f == l)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}