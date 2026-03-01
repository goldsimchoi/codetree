#include <iostream>
#include <string>
using namespace std;

int main() {
    // Please write your code here.

    string str;

    cin >> str;

    char c = str[0];

    cout << str.substr(1,str.length()-1)+str[0];


    return 0;
}