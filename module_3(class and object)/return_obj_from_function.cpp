#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Student
{
public:
    char name[100];
    int roll;
    int cls;
    char section;
    Student(int rl, char sec, int cs, char *nm)
    {
        roll = rl;
        section = sec;
        cls = cs;
        strcpy(name, nm);
    }
};
Student fun()
{
    char name[100] = "Karim Ullah";
    Student karim(22, 'A', 8, name);
    return karim;
}
int main()
{
    Student karim = fun();
    cout << karim.section << "\n";
    cout << karim.name << "\n";
    cout << karim.roll << "\n";
    cout << karim.cls << "\n";
}