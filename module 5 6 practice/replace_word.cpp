#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s;
    cin >> s;
    string word = "EGYPT";
    while (s.find(word) != -1)
    {
        s.replace(s.find(word), 5, " ");
    }
    cout << s << "\n";
}