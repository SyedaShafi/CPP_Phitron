#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int *fun()
{
    // int a[5];
    int *a = new int[5];
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    return a;
}
int main()
{
    int *a = fun();
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
}