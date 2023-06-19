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
        int ele, odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            if (ele % 2 == 0)
                even++;
            else
                odd++;
        }
        if (n % 2 != 0)
        {
            cout << -1 << "\n";
            continue;
        }
        int ans = n / 2;
        cout << min(abs(even - ans), abs(odd - ans));
        cout << "\n";
    }
}