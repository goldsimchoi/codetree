#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Please write your code here.
    int arr[2][4];

    int a=0;//가로
    int b=0;//세로
    int c=0;//전체


    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }


    for(int j=0; j<2; j++){
        for(int i=0;i<4;i++){
            a+=arr[j][i];
        }    
        cout << fixed << setprecision(1)<< float(a)/4.0<<" ";
        a=0;
    }

    cout <<"\n";

    for(int j=0; j<4; j++){
        for(int i=0;i<2;i++){
            a+=arr[i][j];
        }    
        cout << fixed << setprecision(1)<< float(a)/2.0<<" ";
        a=0;
    }
    cout <<"\n";


    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            c  += arr[i][j];
        }
    }

    cout << fixed << setprecision(1)<< float(c)/8.0;
    return 0;
}