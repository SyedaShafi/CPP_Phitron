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
    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (std[i].marks > std[j].marks)
                swap(std[i], std[j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {

        cout << std[i].name << " " << std[i].roll << " " << std[i].marks << "\n";
    }
}