#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string str;

    int n;

    cin >> n >> str;
    int cnt=0;
    for(int i=0; i <n;i++){
        string str2;
        cin >> str2;

        if(str == str2){
            cnt++;
        }

    }
    cout << cnt;
    return 0;
}