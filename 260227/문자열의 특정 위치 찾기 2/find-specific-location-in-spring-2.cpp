#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    string str[5]={"apple", "banana", "grape", "blueberry", "orange"};
    char c;
    int n=0;
    cin >> c;

    
    for(int i=0; i<5;i++){
        for(int j=2; j<4;j++){
            if(str[i][j]==c){
                n++;
                cout << str[i] << '\n';
                break;
            }
        }
    }

    cout << n;


    return 0;
}