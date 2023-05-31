#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
namespace rakib
{
    int age = 24;
    void hello()
    {
        cout << "Hello from rakib namespace";
    }

}
namespace sakib
{
    int age1 = 2;
    void hello1()
    {
        cout << "Hello from sakib namespace";
    }

}
using namespace rakib;
int main()
{
    // cout << rakib::age;
    cout << age;
}