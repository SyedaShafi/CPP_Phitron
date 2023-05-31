#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Student
{
public:
    char name[100];
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(char *nm, int rl, char sec, int marks, int c)
    {
        strcpy(name, nm);
        roll = rl;
        section = sec;
        math_marks = marks;
        cls = c;
    }
};
int main()
{
    char str1[100] = "std1";
    Student st1(str1, 12, 'A', 54, 9);

    char str2[100] = "std2";
    Student st2(str2, 13, 'B', 59, 9);

    char str3[100] = "std3";
    Student st3(str3, 14, 'C', 94, 9);

    if (st1.math_marks > st2.math_marks and st2.math_marks > st3.math_marks)
        cout << st1.name;
    else if (st2.math_marks > st1.math_marks and st2.math_marks > st3.math_marks)
        cout << st2.name;
    else
        cout << st3.name;
}