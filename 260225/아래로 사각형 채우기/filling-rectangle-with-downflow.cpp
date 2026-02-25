#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n=0;
    cin >> n;
    int arr[n][n]={0,};
    int k=1;

    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            arr[j][i]=k;
            k++;
        }
    }


    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            cout << arr[j][i]; << ' ';
        }
        cout << '\n';
    }



    return 0;
}