#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;

    cin >> str;
    int n=0;

    while(str.length() > 1){


        cin >> n;

        if(n>str.length()){
            str.erase(str.length()-1,1);
            cout << str << '\n';
        }
        else{
            str.erase(n,1);
            cout <<str << '\n';
        }

    }



    return 0;
}