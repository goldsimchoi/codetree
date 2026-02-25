#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    
    int N,M=0;


    cin >> N >> M;

    int arr1[N][M]={0,};
    int arr2[N][M]={0,};


    for(int i=0; i<N;i++){
        for(int j=0;j<M;j++){
            cin >> arr1[i][j]; 
        }
    }

    for(int i=0; i<N;i++){
        for(int j=0;j<M;j++){
            cin >> arr2[i][j]; 
        }
    }
    
    for(int i=0; i<N;i++){
        for(int j=0;j<M;j++){
           if(arr1[i][j]==arr2[i][j]){
                arr1[i][j]=0;

           }
            else{
                arr1[i][j]=1;
            }

        }
    }



  for(int i=0; i<N;i++){
        for(int j=0;j<M;j++){
            cout <<  arr1[i][j] << ' '; 
        }
        cout << '\n';
    }

    
    return 0;
}