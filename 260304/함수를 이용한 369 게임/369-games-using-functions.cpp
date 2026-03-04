#include <iostream>

using namespace std;

int a, b;

int func(int a, int b){

    int cnt=0;
    for(int i=a; i<=b;i++){

        int key=0;
        string str;
        str = to_string(i);

        for(int j=0;j<str.length();j++){
            if(str[j]=='3' || str[j]=='6'|| str[j]=='9'){
                key=1;
            }
        }


        if(i%3 ==0 || key==1 ){
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