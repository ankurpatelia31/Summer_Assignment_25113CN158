#include <iostream>
using namespace std;
int main()
{
    int a =0;
    int b=1;
    int s=a+b;
    cout << "0,1,";

   while (s<35)
   {
    
    cout << s << ",";
    a=b;
    b=s;
    s=a+b;
   }
   return 0;

}