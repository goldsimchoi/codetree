#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n=0;
    cin >> n;
    int sum=0;
    string str;
    for(int i=0;i<n;i++){
        cin >> str;

        sum += stoi(str); 

    }
    str = to_string(sum);
    
    cout << str.substr(1,str.length()-1) + str.substr(0,1);
    return 0;
}