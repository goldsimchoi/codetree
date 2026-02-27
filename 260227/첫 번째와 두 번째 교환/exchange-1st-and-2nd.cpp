#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;

    char c,c2;

    cin >> str;

    c= str[0];
    c2 = str[1];

    for(int i=0; i<str.length();i++){
        if(str[i]==c){
            str[i]=c2;
        }
        else if(str[i]==c2){
            str[i]=c;
        }

    }

    cout <<str;
    return 0;
}