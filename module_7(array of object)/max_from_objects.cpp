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
    Student mx;
    mx.marks = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        if (std[i].marks > mx.marks)
            mx = std[i];
    }
    cout << mx.name << " " << mx.roll << " " << mx.marks << "\n";
}