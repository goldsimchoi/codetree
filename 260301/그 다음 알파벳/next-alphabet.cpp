#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    char c;
    cin >> c;

    c = (int)c +1;

    if(c=='{'){
        c='a';
    }

    cout << c;

    return 0;
}