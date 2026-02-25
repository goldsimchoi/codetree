#include <iostream>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    int k=0;
    int arr[n][m]={0,};

    // Please write your code here.
    for(int i=0; i<m; i++){
        if(i%2==0){
            for(int j=0; j<n; j++){
                arr[j][i]=k;
                k++;
            }
        }


        else{
             for(int j=0; j<n; j++){
                arr[n-1-j][i]=k;
                k++;
            }
        }



    }

for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){

            cout <<arr[i][j]<<' ';


        }
        cout << '\n';
    }

    return 0;
}
