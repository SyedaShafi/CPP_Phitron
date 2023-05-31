#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int *fun()
{
    int *a = new int;
    *a = 10;
    return a;
}
int main()
{
    int *a = fun();
    cout << *a << "\n";
    delete a;
}