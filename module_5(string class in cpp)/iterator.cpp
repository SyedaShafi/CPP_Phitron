#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s;
    cin >> s;
    auto itr = s.begin();
    while (itr != s.end())
    {
        cout << *itr;
        itr++;
    }
}
