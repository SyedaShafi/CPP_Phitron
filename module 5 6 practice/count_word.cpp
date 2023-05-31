#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string s;
    getline(cin, s);
    int cnt = 0;
    bool f = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (f == false)
        {
            if ((s[i] >= 'a' and s[i] <= 'z') || (s[i] >= 'A' and s[i] <= 'Z'))
            {
                cnt++;
                f = true;
            }
        }
        else if (s[i] == '!' || s[i] == ',' || s[i] == '.' || s[i] == '?' || s[i] == ' ')
            f = false;
    }
    cout << cnt << "\n";
}