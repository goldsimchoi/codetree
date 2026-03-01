#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;

    cin >> str;
    cout << str << '\n';
    for(int i=0; i<str.length();i++){
    char c = str[str.length()-1];
    str = c + str.substr(0,str.length()-1);
    cout << str << '\n';


    }
  
    return 0;
}