#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student obj[n];
    for (int i = 0; i < n; i++)
    {
        cin >> obj[i].name >> obj[i].roll >> obj[i].marks;
    }
    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(obj[i], obj[j]);
        i++, j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << obj[i].name << " " << obj[i].roll << " " << obj[i].marks << "\n";
    }
}