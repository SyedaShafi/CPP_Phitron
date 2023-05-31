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

    Person(string name, int age, int marks1, int marks2)
    {
        this->name = name;
        this->age = age;
        this->marks1 = marks1;
        this->marks2 = marks2;
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
}