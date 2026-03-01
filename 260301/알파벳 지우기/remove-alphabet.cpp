#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    string s1,s2;

    cin >> s1;
    cin >> s2;
    int idx=0;

    while(idx < s1.length()){

        if((int)s1[idx]>47 && (int)s1[idx]<58){
            idx++;
        }

        else{
            s1.erase(idx,1);
        }

    }


    idx=0;
    while(idx < s2.length()){

        if((int)s2[idx]>47 && (int)s2[idx]<58){
            idx++;
        }

        else{
            s2.erase(idx,1);
        }

    }




    cout << stoi(s1) + stoi(s2);

    return 0;
}