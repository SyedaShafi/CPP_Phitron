#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Person
{
public:
    string name;
    int age;
    int marks1, marks2;

    Person(string nm, int ag, int m1, int m2)
    {
        name = nm;
        age = ag;
        marks1 = m1;
        marks2 = m2;
    }

    void hello()
    {
        cout << "Hello ";
    }
    
    int total_marks()
    {
        return marks1 + marks2;
    }
};
int main()
{
    Person p1("Rima Dey", 24, 89, 78);
    p1.hello();
    // cout << p1.name << " " << p1.age << "\n";
    cout << p1.total_marks();
}