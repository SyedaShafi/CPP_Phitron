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
};
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
    }

    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(obj[i].id, obj[j].id);
        i++, j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << obj[i].name << " " << obj[i].cls << " " << obj[i].section << " " << obj[i].id;
        cout << "\n";
    }
}