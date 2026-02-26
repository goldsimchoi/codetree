#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,m=0;
    cin >> n >> m;
    int arr[9][9]={0,};

    int a,b=0;
    int k=1;

    for(int i=0; i<m; i++){
        cin >> a >> b;
        arr[a-1][b-1]=k;
        k++;
    }

    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}