#include <iostream>

using namespace std;

int n, m;

int gcd(int a,int b){

    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

void LCM(int a,int b){

    cout << (a/gcd(a,b))*b;

}


int main() {
    cin >> n >> m;

    // Please write your code here.

    LCM(n,m);
    return 0;
}