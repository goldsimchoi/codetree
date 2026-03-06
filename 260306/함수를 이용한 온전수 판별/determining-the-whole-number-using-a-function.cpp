#include <iostream>

using namespace std;

int a, b;

void func(int a,int b){


    int cnt=0;

    for(int i=a;i<=b;i++){

       

        if(i%2!=0 && (i-5)%10!=0 && (i%3!=0 || i%9==0) ){
            cnt++;
        }


    }

    cout<< cnt;

}



int main() {
    cin >> a >> b;

    // Please write your code here.
    func(a,b);
    return 0;
}