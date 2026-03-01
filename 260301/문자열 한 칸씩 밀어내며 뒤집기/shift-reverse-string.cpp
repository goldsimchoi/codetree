#include <iostream>

using namespace std;

string input_str;
int q;

int main() {
    cin >> input_str >> q;

    string str = input_str;

    for (int i = 0; i < q; i++) {
        int query_type;
        cin >> query_type;

        if(query_type==1){

            str = str.substr(1,str.length()-1) + str.substr(0,1);

            cout << str << '\n';


        }

        else if(query_type==2){
            
            str = str.substr(str.length()-1,1) + str.substr(0,str.length()-1);
            cout << str << '\n';

        }

        else{

            string tmp="";

            for(int i=str.length()-1; i>=0;i--){

                tmp += str[i];

            }
            str=tmp;
            cout << str << '\n';


        }



    }

    // Please write your code here.

    return 0;
}
