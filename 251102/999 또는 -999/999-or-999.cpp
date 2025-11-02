#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    int min;
    int max;

    cin >> a;
    min = a;
    max = a;

    while(a!=999 && a!=-999){
        if(a > max){
            max = a;
        }

        if(a < min){
            min = a;
        }
    
         cin >>a;
    
    }

    cout << max << " " << min;

    return 0;
}