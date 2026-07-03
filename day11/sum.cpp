#include <iostream>
using namespace std;
int sum(int a , int b)
{
    return a+b;
}
int main()
{
 int n1, n2;
cout << "enter the numbers";
cin >> n1;
cin >> n2;
cout << "sum is" << sum(n1,n2);

}