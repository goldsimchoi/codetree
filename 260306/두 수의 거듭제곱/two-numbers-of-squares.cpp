#include <iostream>

using namespace std;

int a, b;


void func(int a,int b){

    for(int i=0;i<b;i++){
        a*=a;
    }

    cout << a;
}


int main() {
    cin >> a >> b;

    // Please write your code here.
    func(a,b);
    return 0;
}