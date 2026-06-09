#include <iostream>
using namespace std;
int main()
{
    cout << "fibonnaci series: " ;
    cout << "enter limit";
    int n;
    cin >> n;
    int a=0,b=1,s=a+b;
    cout << a <<","<<b<<",";
    while (s<n)
   {
    
    cout << s << ",";
    a=b;
    b=s;
    s=a+b;
   }
   return 0;

}