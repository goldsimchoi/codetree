#include <iostream>

using namespace std;

int a, b;

int func(int a,int b){

    int cnt=0;

    for(int i=a;i<=b;i++){
        int is_prime =0;

        int idx=0;
        for(int j=1;j<i;j++){

            if(i%j==0){
                idx++;
            }


        }


        if(idx==1){
            is_prime=1;
        }

        if(is_prime){
            cnt++;
        }

    }


    return cnt;
}



int main() {
    cin >> a >> b;

    // Please write your code here.
    cout << func(a,b);

    return 0;
}