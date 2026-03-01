#include <iostream>

using namespace std;

int N;

void square(int N){


    int k=1;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout << k << ' ';
            k++;
            if(k==10){
                k=1;
            }
        }
        cout << endl;
    }


}


int main() {
    cin >> N;

    // Please write your code here.
    square(N);
    return 0;
}