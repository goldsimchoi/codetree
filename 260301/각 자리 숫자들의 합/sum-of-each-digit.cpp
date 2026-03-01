#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int sum=0;
    int n;
    

    cin >> n;
    string str=to_string(n);
    
    for(int i=0; i<str.length();i++){
        sum+=(int)str[i];    
    }

    cout << sum;

    return 0;
}