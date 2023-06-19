#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Student a, Student b)
{
    if (a.eng_marks + a.math_marks == b.eng_marks + b.math_marks)
        return a.id < b.id;
    return a.eng_marks + a.math_marks > b.eng_marks + b.math_marks;
}
int main()
{
    int n;
    cin >> n;
    Student obj[n];

    for (int i = 0; i < n; i++)
    {
        cin >> obj[i].name;
        cin >> obj[i].cls;
        cin >> obj[i].section;
        cin >> obj[i].id;
        cin >> obj[i].math_marks;
        cin >> obj[i].eng_marks;
    }

    sort(obj, obj + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << obj[i].name
             << " " << obj[i].cls
             << " " << obj[i].section
             << " " << obj[i].id
             << " " << obj[i].math_marks
             << " " << obj[i].eng_marks;
        cout << "\n";
    }
}