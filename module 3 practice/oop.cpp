#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Student
{
public:
    char name[100];
    int cls;
    char sector;
    Student(int a)
    {
        cout << a << " I am from constructor\n";
    }
};
int main()
{
    Student ami(12);
}