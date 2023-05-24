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
int main()
{
    char name[100] = "Rahim Ullah";
    Student *rahim = new Student(5, 'A', 11, name);
    // as rahim is a pointer we can't access data in the traditional manner
    cout << (*rahim).name << "\n";
    // or we can use ->
    cout << rahim->name << "\n";
    // if we want to delete the object we use delete + the obj pointer

    delete rahim;
    cout << rahim->name << "  after deletion\n";
}