#include <iostream>
using namespace std;

int perfect(int n, int i)
{
    if (i == 0) return 0;        
    if (n % i == 0)
        return i + perfect(n, i - 1);
    return perfect(n, i - 1);
}

int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;

    if (perfect(n, n - 1) == n)
        cout << n << " is a perfect number";
    else
        cout << n << " is not a perfect number";

    return 0;
}