#include <iostream>
#include <string>

using namespace std;

int main() {
    // Please write your code here.
    string str;
    char c;
    int sum=0;

    getline(cin,str);
    cin >> c;
    for(int i=0; i<str.length();i++){
        if(str[i]==c) sum++;
    }
    cout << sum;
    return 0;
}