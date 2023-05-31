#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Count
{
public:
    char ch;
    int cnt;
};
bool cmp(Count a, Count b)
{
    return a.cnt > b.cnt;
}
int main()
{
    string s;
    cin >> s;
    Count obj[26];
    for (int i = 0; i < 26; i++)
    {
        obj[i].ch = (i + 'a');
        obj[i].cnt = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        obj[s[i] - 'a'].cnt++;
    }
    sort(obj, obj + 26, cmp);
    for (int i = 0; i < 26; i++)
    {
        if (obj[i].cnt > 0)
        {
            for (int j = 0; j < obj[i].cnt; j++)
            {
                cout << obj[i].ch;
            }
        }
    }
}