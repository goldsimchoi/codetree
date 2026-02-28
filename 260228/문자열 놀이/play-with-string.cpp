#include <iostream>
using namespace std;

int main() {
    // Please write your code here.


    string str;
    int q;

    cin >> str >> q;

    for(int i=0; i<q; i++){

        int a,b,c=0;
        char x,y;

        cin >> a;

        if(a==1){
            cin >> b >> c;

            char tmp;
            tmp = str[b-1];
            str[b-1] = str[c-1];
            str[c-1] = tmp; 
            cout << str << '\n';

        }

        else{

            cin >> x >> y;

            for(int j=0; j<str.length();j++){

                if(str[j]==x){
                    str[j]=y;
                }

            }

            cout <<str << '\n';

        }





    }



    return 0;
}