#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s;
    getline(cin, s);
    string x;
    cin >> x;
    stringstream ss(s);
    string word;
    int cnt = 0;
    while (ss >> word)
    {
        if (word == x)
            cnt++;
    }
    cout << cnt << '\n';
}