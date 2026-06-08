#include <iostream>
using namespace std;
int main()
{
    cout << "enter the first  number ";
    int n1,n2;
    cin >> n1 ;
    cout << "enter the second number";
    cin >> n2;
    if(n2>n1)
    {
        int a=n1;
        n1=n2;
        n2=a;
    }
    int r;
    do{
        r=n1%n2;
       int s=n2;
        n2=r;
        n1=s;
 }while(r!=0);

 cout << "the gcd is " << n1; 
    return 0;

}