#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int *a = new int[5];
    int *b = new int[7];
    for (int i = 0; i < 5; i++)
        cin >> a[i];
    for (int i = 0; i < 5; i++)
        b[i] = a[i];
    b[5] = 7;
    b[6] = 8;

    for (int i = 0; i < 7; i++)
        cout << b[i] << " ";

    cout << "\n";
    delete[] a;
    for (int i = 0; i < 5; i++)
        cout << a[i] << "\n";
}