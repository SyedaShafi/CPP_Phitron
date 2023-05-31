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

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};
int main()
{
    Person *rakib = new Person("Rakib ahsan", 34);
    Person *sakib = new Person("sakib ahsan", 23);

    // rakib->age = sakib->age;
    // rakib->name = sakib->name;

    // full object is copied
    *rakib = *sakib;    
    delete sakib;
    cout << rakib->age << " " << rakib->name;
}