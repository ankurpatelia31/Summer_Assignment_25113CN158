#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "enter the number ";
    int a;
    cin >> a;
    int coun=0;
    for(;a>0;a=a/10)
    coun++;
    cout << " the number of digits is " << coun;
    return 0;
}