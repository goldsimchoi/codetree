#include <iostream>

using namespace std;

int a, b;

void func(int a, int b){

    int cnt=0;
    string s;
    for(int i=a;i<=b;i++){

        if(i==1){continue;}
        if(i==2){
        cnt++;
        continue;
        }
        if(i%2==0){continue;}

        int flag=0;
        for(int j=3; j*j<=i; j+=2){
            if(i%j==0){flag=1; continue;}
        }
        if(flag==1){continue;}

        s = to_string(i);
        if((s[0]+s[1])%2==0){
            cnt++;
           // cout << i << "\n";

            continue;
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