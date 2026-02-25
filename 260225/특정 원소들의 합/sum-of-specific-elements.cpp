#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    //int arr[4][4] = {{3,3,54,5},{2,6,7,81},{3,31,2,1},{95,5,7,1}};


    int arr[4][4];

    for(int i=0; i<4;i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];
        }
    }



    int result = 0;
    
    for(int i=0; i<4;i++){
        for(int j=0; j<=i; j++){
            result += arr[i][j];
        }
    }

    cout << result << endl;

    return 0;
}