#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "enter the number";
    int n;
    cin >> n;
    int n2=n;
    int a,pal=0;
    for(;n>0;n=n/10)
    {
        a=n%10;
        pal=pal*10+a;
    }
    if(pal==n2)
    cout << "palindrome";
    else
    cout << "not a palindrome";
    return 0;
}