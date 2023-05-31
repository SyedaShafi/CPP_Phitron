#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Person
{
public:
    char name[100];
    float height;
    int age;
    Person(char *nm, float h, int ag)
    {
        strcpy(name, nm);
        height = h;
        age = ag;
    }
};
int main()
{
    char name[100] = "Mohammad Ali";
    Person *person1 = new Person(name, 5.2, 23);

    char name1[100] = "Rashid Ali";
    Person *person2 = new Person(name1, 5.6, 28);
    if ((person1->age )>( person2->age))
        cout << person1->name;
    else
        cout << person2->name;
}