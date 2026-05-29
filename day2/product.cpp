#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "enter the number";
    int n;
    cin >> n;
    int a , pro=1;
    for(;n>0;n=n/10)
    {
        a=n%10;
        pro*=a;
    }
    cout << "product is:" << pro;
    return 0;
}
