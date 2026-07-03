#include <iostream>
using namespace std;
int max(int num1, int num2)
{
 if(num2>num1)
 return  num2;
 return num1;
}
int main()
{
    int a,b;
    cout <<"enter numbers";
    cin >> a >> b;
    ;
    cout<< max(a,b);


}