#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s1,s2;
    cin >> s1 >>s2;

    cout << stoi(s1+s2) + stoi(s2+s1);
    return 0;
}