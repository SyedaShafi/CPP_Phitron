#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    string a = "Hello hi";
    string b = "World";
    // a = a + b;
    // append
    // a.append(b);
    // a.push_back('a');

    // a = "Hiiiiiiiiiiiiii";
    // a.assign("Hooooooooooooooooooooooooooooo");
    // a.erase(4, 1);
    // a.replace(4, 1, "aaaaaa");
    a.insert(5, " Shafi");
    
    cout << a << "\n";
    cout << b << "\n";
}