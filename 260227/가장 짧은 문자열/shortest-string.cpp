#include <iostream>
#include <string>

using namespace std;

int main() {
    // Please write your code here.
    string str1;
    int max=0;
    int min=20;
    for(int i=0;i<3;i++){
        cin >> str1;
        if(str1.length()>max) max = str1.length(); 
        if(str1.length()<min) min = str1.length();
    }
     cout << max-min;

    return 0;
}