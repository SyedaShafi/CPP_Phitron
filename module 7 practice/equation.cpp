#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int x, n;
    cin >> x >> n;
    ll i = 2, temp = 1, ans = 0;

    for (i = 2; i <= n; i += 2)
    {
        temp = 1;
        for (int j = 0; j < i; j++)
        {
            temp *= x;
        }
        ans += temp;
    }
    cout << ans << "\n";
}