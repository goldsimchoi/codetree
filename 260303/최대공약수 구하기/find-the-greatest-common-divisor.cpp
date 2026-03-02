#include <iostream>

using namespace std;

int n, m;

void func(int n, int m){

    if(m==0){
        cout << n;
        return;
    }

    func(m,n%m);
    
}

int main() {
    cin >> n >> m;

    // Please write your code here.
   func(n,m);
    
    return 0;
}