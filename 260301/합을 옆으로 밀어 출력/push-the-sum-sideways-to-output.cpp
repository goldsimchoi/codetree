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

    cout << substr(1,str.length()-1)
    return 0;
}