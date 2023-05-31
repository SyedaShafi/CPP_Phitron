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
    // array of objects a constructor use kora hoy na
    Student std[3];
    for (int i = 0; i < 3; i++)
    {
        getline(cin, std[i].name);
        cin >> std[i].roll >> std[i].marks;
        cin.ignore();
    }
    Student mn;
    mn.marks = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        if (std[i].marks < mn.marks)
            mn = std[i];
    }
    cout << mn.name << " " << mn.roll << " " << mn.marks << "\n";
}