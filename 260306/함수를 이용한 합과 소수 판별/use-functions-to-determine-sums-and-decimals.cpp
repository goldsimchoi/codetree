#include <iostream>

using namespace std;

int a, b;


int check(int x){

    if((x/10 + x%10)%2==0){
        return 1;
    }

    else{
        return 0;
    }



    if(x==1) return 0;
    if(x==2) return 1;

    int idx=0;
    for(int i=3;i<x;i+=2){
        if(x%i==0){

            idx++;

        }

        if(idx==1){
            return 0;
        }

    }
   
    
}


int func(int x,int y){


    int cnt =0;
    for(int i=x;i<=y;i++){


        if(check(i)){
            cnt++;
        }


    }
    cout << cnt;

}

int main() {
    cin >> a >> b;

    // Please write your code here.
    func(a,b);

    return 0;
}