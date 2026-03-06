#include <iostream>

using namespace std;

int a;
int c;
char o;

void func(int a,char o,int c){

    if(o=='+'){

        cout << a <<" + "<< c <<" = "<< a+c;

    }

    else if(o=='-'){
        cout << a <<" - "<< c <<" = "<< a-c;

    }

    else if(o=='*'){

        cout << a <<" * "<< c <<" = "<< a*c;
    }

    else if(o=='/'){
        cout << a <<" / "<< c <<" = "<< a/c;
        
    }

    else{

        cout << "False";
    }


}




int main() {
    cin >> a >> o >> c;

    // Please write your code here.
    func(a,o,c);
    return 0;
}