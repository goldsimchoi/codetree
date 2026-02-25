#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    int k=1;
    // Please write your code here.

    int arr[n][m]={0,};

    for(int i=0; i<=n+m-2; i++){

        for(int a=0; a<i+1; a++){
            for(int b=0; b<i+1; b++){
                if((a+b)==i && a<n && b<m){
                    arr[a][b]=k;
                    k++;
                }            
            }
        }
    
    }


    for(int a=0; a<n; a++){
            for(int b=0; b<m; b++){
                cout << arr[a][b] << ' ';
            }
            cout << '\n';
        }    

    return 0;
}
