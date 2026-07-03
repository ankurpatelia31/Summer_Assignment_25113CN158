#include <iostream>
#include <string>
using namespace std;
int main()

{
    for(int i=1;i<7;i++){
    
    for(int j =0;j<i;j++)
    cout << char(64+i) ;
    cout << endl;}
    return 0;
}