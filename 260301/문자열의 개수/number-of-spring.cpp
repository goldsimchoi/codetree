#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string str;
    string a[200]={};

    int idx=1;
    int cnt=0;
    while(cin >> str && str!="0"){

        a[cnt]=str;
        cnt++;
    }


    cout << cnt << '\n';

    for(int i=0; i<cnt; i++){

        if(i%2==0 && a[i]!="0"){
            cout << a[i] << '\n';
        }

        else if(a[i]=="0"){
            break;
        }


    }


    return 0;
}