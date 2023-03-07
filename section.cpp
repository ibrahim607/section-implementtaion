
#include <iostream>
#include "employee.h"6
using namespace std;

int main()
{
    employee x[100];
    int n = 0;
    char m;

    do {
        cout << "enter the employer's number" << n+1 << endl;
        x[n++].data();
        cout << "do u want to add more employees? y/n ";
        cin >> m;
       
    } while (m == 'y' && n <= 99);

        for (int i = 0; i < n; i++)
        {
            x[i].putdata() ;
        }
}
