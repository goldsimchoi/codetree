#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A,B;
    cin >> A >>B;
    
    int arr[A]={0,};
    for(int i=0;i<A;i++){
        cin >> arr[i];
    }


    for(int i=0;i<A;i++){
        for(int j=i;j<A;j++){

            if(arr[i] > arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }

        }
    }


    cout << arr[B-1];


    return 0;
}