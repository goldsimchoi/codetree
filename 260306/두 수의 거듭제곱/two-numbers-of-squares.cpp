#include <iostream>

using namespace std;

int a, b;


void func(int a,int b){

    int tmp=a;
    for(int i=0;i<b-1;i++){
        
        a*=tmp;
    }

    cout << a;
}


int main() {
    cin >> a >> b;

    // Please write your code here.
    func(a,b);
    return 0;
}