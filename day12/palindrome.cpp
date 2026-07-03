#include <iostream>
using namespace std;
int palindrome(int n,int rev=0)
{
    if (n == 0) return rev;          // base case: stop when nothing left
    int g = n % 10;                  // extract last digit
    rev = rev * 10 + g;              // shift result left, add digit
    return palindrome(n / 10, rev);  // recurse with remaining digits
}
int main()
{
    cout << "enter the number ";
    int a;
    cin >> a;

   if(a==palindrome(a))
   cout << "palindrome";
   else 
   cout << "not a palindrome";
   return 0;
}