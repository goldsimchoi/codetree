#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string str;

    cin >> str;
    char tmp = str[1];
    for(int i=0; i<str.length();i++){
        if(str[i]==tmp){
            str[i]=str[0];
        }
    }

    cout << str;

    return 0;
}