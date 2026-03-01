#include <iostream>
using namespace std;

int main() {
    // Please write your code here.


    string str1,str2;

    cin >> str1 >> str2;

    for(int i=0; i<str1.length();i++){
        if((int)str1[i]<48 || str1[i]>57){
            str1.erase(i);
        }
    }

    for(int i=0; i<str2.length();i++){
        if((int)str2[i]<48 || str2[i]>57){
            str2.erase(i);
        }
    }



    cout << stoi(str1)+stoi(str2);



    return 0;
}