#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n=0;
    cin >> n;

    int k=1;
    int key=0;
    int arr[n][n]={0,};


    for(int i=n-1; i>=0; i--){//col
        for(int j=n-1; j>=0; j--){

            if((key%2)==0){
                arr[j][i]=k;
                k++;
            }

            else{
                arr[n-j-1][i]=k;
                k++;
            }
        }
        key++;
    }


    for(int a=0; a<n; a++){
        for(int b=0; b<n; b++){
            cout << arr[a][b] << ' ';
        }
        cout << '\n';
    }



    return 0;
}