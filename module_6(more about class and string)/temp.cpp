#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string str;
    cin >> str;
    string s = "EGYPT";
    int res = str.find(s);
    while (res != -1)
    {
        str.replace(res, 5, " ");
        res = str.find(s);
    }
    cout << str << "\n";
}