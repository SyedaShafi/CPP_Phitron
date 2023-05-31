#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int a, b, c;
    char s, e;
    cin >> a >> s >> b >> e >> c;
    if (s == '+' and a + b == c)
        cout << "Yes\n";
    else if (s == '-' and a - b == c)
        cout << "Yes\n";
    else if (s == '*' and a * b == c)
        cout << "Yes\n";
    else
    {
        if (s == '+')
            cout << a + b << "\n";
        else if (s == '-')
            cout << a - b << endl;
        else if (s == '*')
            cout << a * b << endl;
    }
}