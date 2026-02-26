#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n,m=0;
    int a,b=0;
    int arr[11][11]={0,};

    cin >> n >> m;

    for(int i=0; i<m; i++){
        cin >> a >> b;
        arr[a][b] = a*b; 
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n;j++){
            cout << arr[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}