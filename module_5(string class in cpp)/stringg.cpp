#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    // string s;
    // cout << s.capacity();
    // string s = "hiiiii";
    // cout << s << "\n";
    // s.clear();
    // cout << s.capacity() << "\n";
    // cout << s.size() << "\n";
    // cout << s.empty() << "\n";

    string s;
    cin >> s;
    cout << s.size() << "\n";
    cout << s << "\n";
    s.resize(16, 'a');
    cout << s.size() << "\n";
    cout << s << "\n";
}