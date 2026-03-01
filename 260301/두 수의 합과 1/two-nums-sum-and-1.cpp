#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int a,b=0;

    string str;
    cin >> a >> b;

    a= a+b;
    str = to_string(a);

    int cnt=0;
    for(int i=0; i<str.length();i++){
        if(str[i]=='1'){
            cnt++;
        }
    }
    
    cout << cnt;
    return 0;
}