#include <iostream>
using namespace std;
void fibonacci(int a , int b,int n)
{
    int c=a+b; 
    if(c>n) return;
   cout << c <<",";
  
   return fibonacci(b,c,n);
}
int main()
{
   cout << "enter limit";
   int n;
   cin >> n;
   int a=0;
   int b=1;
   cout <<a <<","<< b<< ",";
   fibonacci(a,b,n);
   return 0 ;
}
