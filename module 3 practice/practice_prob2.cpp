#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Criketre
{
public:
    int jersey_no;
    char country[100];
};
int main()
{
    Criketre *dhoni = new Criketre;
    strcpy(dhoni->country, "Bangladesh");
    dhoni->jersey_no = 12;
    Criketre *kohli = new Criketre;
    // here kohli has its own memory
    // strcpy(kohli->country, dhoni->country);
    // kohli->jersey_no = dhoni->jersey_no;

    // here same pointer is assigning for kohli
    // kohli = dhoni;
    // if we delete dhoni then the memory will be deleted so kohli cant get any data
    delete dhoni;
    cout << kohli->country << " " << kohli->jersey_no;
}