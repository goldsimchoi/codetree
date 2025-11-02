#include <iostream>

using namespace std;

int N;
int A[100];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    for(int i=0; i<N; i++){
        for(int j=i; j<N; j++){
            if(A[i]<A[j]){
                int tmp;
                tmp = A[j];
                A[j]= A[i];
                A[i] = tmp;

            }
        }

    }

    cout << A[0] << " " << A[1];


    return 0;
}
