#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string str;

    cin >> str;
    for(int i=0; i<str.length();i++){
        if(str[i]==str[1]){
            str[i]=str[0];
        }
    }

    cout << str;

    return 0;
}