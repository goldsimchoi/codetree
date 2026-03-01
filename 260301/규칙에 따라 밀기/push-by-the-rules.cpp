#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string str,cmd;
    cin >> str;
    cin >> cmd;    

    for(int i=0; i<cmd.length();i++){
        if(cmd[i]=='L'){

            str = str.substr(1,str.length()-1)+str.substr(0,1);

        }

        else{
            str = str.substr(str.length()-1,1)+str.substr(0,str.length()-1);
        }

    }

    cout << str;

    return 0;
}