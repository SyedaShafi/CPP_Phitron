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
}; 
int main()
{
    Student Rahim;
    Rahim.cls = 9;
    Rahim.roll = 34;
    Rahim.section = 'D';
    char nm1[100] = "Rahim Uddin";
    strcpy(Rahim.name, nm1);

    Student Karim;
    Karim.cls = 9;
    Karim.roll = 19;
    Karim.section = 'A';
    char nm[100] = "Karim khan";
    strcpy(Karim.name, nm);

    cout << Karim.name << "\n";
}