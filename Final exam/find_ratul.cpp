#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s;
    getline(cin, s);
    string ans = "Ratul";
    stringstream ss(s);
    string word;
    bool flag = false;
    while (ss >> word)
    {
        if (word == ans)
            flag = true;
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}