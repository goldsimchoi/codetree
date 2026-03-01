#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string str,str2;

    cin >> str >> str2;



    for(int i=1;i<=str.length();i++){

        str = str.substr(str.length()-1,1) + str.substr(0,str.length()-1);

        if(str == str2){
            cout << i;
            return 0;
        }

    }

    cout << -1;
    return 0;
}