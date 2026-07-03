#include <iostream>
using namespace std;

int main() {
    int n = 5; 
     int l=1;
    for (int i = 1; i <= n; i++) {
       
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
            
        }
        cout << l*l;
        l=l*10+1;
        cout << endl;
    }
    return 0;
}

