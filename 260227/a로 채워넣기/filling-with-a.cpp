#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str1;
    cin >> str1;

    str1[1]='a';
    str1[str1.length()-1-1]='a';
    cout <<str1;


    return 0;
}