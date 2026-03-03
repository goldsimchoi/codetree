#include <iostream>

using namespace std;

int a, b, c;


void func(int a,int b, int c){

    int min=0;

    if(a<min){
        min = a;
    }

    if(b<min){
        min = b;
    }

    if(a<min){
        min = c;
    }


    cout << min;
}

int main() {
    cin >> a >> b >> c;

    // Please write your code here.

    func(a,b,c);

    return 0;
}