#include <iostream>

using namespace std;

string A, B;

int main() {
    cin >> A;
    cin >> B;
    // Please write your code here.
    
    int a= A.length();
    int b= B.length();


    while(true){

        int idx=-1;


        for(int i=0; i<a+1-b;i++){
            
            int key=1;
            for(int j=0;j<b;j++){
                if(A[i+j]!=B[j]){
                    key=0;

                    break;

                }
            }

            if(key =1){
                idx = i;
                break;
            }

        }

        if(idx == -1){
            break;
        }

        A = A.erase(idx,B.length());
        a=A.length();

    }

    cout << A;
    return 0;
}
