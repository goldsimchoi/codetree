#include <iostream>

using namespace std;

int n;

void func(int n){

    if(n%2==0){

        int a,b;

        a = n/10;
        b = n-(n/10)*10;

        if((a+b)%5==0){
            cout << "Yes";
        }
        else{
            cout << "No";
        }

    }

    else{

        cout << "No";

    }


}




int main() {
    cin >> n;

    // Please write your code here.
    func(n);
    return 0;
}