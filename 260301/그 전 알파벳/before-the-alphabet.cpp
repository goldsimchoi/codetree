#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    char c;
    cin >> c;

    if(c=='a'){
        cout << 'z'; 
        return 0;
    }

    c=(int)c -1;

    cout << c;

    return 0;
}