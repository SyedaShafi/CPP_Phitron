#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
int main()
{
    int num = 15;
    int *num_ptr = &num;
    int **num_ptr_ptr = &num_ptr;
    cout << &num << "\n";
    cout << num_ptr << "\n";
    cout << **num_ptr_ptr << "\n";
}