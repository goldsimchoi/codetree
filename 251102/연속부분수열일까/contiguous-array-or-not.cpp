#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int Anum,Bnum;
    int a[100];
    int b[100];

    int k=0;
    cin >> Anum >> Bnum;

    for(int i=0; i<Anum; i++){
        cin >> a[i];
    }
    
    for(int i=0; i<Bnum; i++){
        cin >> b[i];
    }

    while(b[0]!=a[k]){

        k++;

        if(k==Anum){
            cout << "No";
            return 0;
        }
    }

    //k인덱스가 b시작
    for(int i=0;i<Bnum;i++){
        if(a[k+i]!=b[i]){
            cout << "No";
            return 0;
        }

    }

    cout << "Yes";

    return 0;
}