#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int N,M =0;
    int k=1;

    cin >> N >> M;
    int arr[N][M]={0,};

    for(int i=0; i<N;i++)
    {
        for(int j=0; j<M; j++){

            arr[i][j] = k;
            k++;

        }
    }


    return 0;
}