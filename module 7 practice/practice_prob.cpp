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
bool cmp(Student a, Student b)
{
    if (a.marks == b.marks)
    {
        return a.roll < b.roll;
    }
    return a.marks > b.marks;
}
int main()
{
    int n;
    cin >> n;
    Student obj[n];
    for (int i = 0; i < n; i++)
    {
        cin >> obj[i].name >> obj[i].roll >> obj[i].marks;
    }

    sort(obj, obj + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << obj[i].name << " " << obj[i].roll << " " << obj[i].marks << "\n";
    }
}