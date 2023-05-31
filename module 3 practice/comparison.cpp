#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int a, b;
    char ch;
    cin >> a >> ch >> b;
    if (ch == '>' and a > b)
        cout << "Right\n";
    else if (ch == '<' and a < b)
        cout << "Right\n";
    else if (ch == '=' and a == b)
        cout << "Right\n";
    else
        cout << "Wrong\n";
}