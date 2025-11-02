#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    int max=0;

    for(int i=0; i<10; i++){
        cin >> a;
        if(a > max){
            max = a;
        }
    
    }

    cout << max;

    return 0;
}