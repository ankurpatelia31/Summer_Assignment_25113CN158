#include <iostream>
#include <string>
using namespace std;
int main()

{
   for(int i=0;i<6;i++)
   {
    char a='A';
    for(int j=0;j<i;j++){
    cout << a;
    a++;}
    cout << endl;
   }
   return 0;
}