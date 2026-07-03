#include <iostream>
#include <cmath>
using namespace std;\
int count (int n)
{
   if (n==0) return 0;
   return 1+ count(n/10);
}
int armstrong(int n,int c)
{
    int b= n%10;
    if(b==0)return 0;
    return pow(b,c)+armstrong(n/10,c);
}
int main()
{
    cout << "enter the number ";
    int a;
    cin >> a;
    if(armstrong(a,count (a))== a)
    cout << "armstrong";
    return 0;

}