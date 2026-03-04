#include <iostream>

using namespace std;

int y;

void func(int y){

    if(y%4==0){

        if(y%100==0 && y%400!=0){
            cout << "false";
        }

        else{

            cout << "true";
        }


    }
    
    else{

        cout << "false";


    }

}



int main() {
    cin >> y;

    // Please write your code here.
    func(y);
    return 0;
}