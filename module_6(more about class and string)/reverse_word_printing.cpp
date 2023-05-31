#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
void print(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        print(ss);
        cout << word << "\n";
    }
}
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    print(ss);
}