#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // Please write your code here.

 
    string str;
    while (cin >> str && str != "END") {
        reverse(str.begin(), str.end());
        cout << str << '\n';
    }

    return 0;
}