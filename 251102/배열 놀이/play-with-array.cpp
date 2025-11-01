#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Please write your code here.
    int N,Q;

    cin >> N >> Q;
    
    int array[100];

    for(int i=0;i<N;i++){
    
        cin >> array[i];
    }

    for(int i=0; i<Q; i++){

        int a;

        cin >> a;

        if(a==1){
            int b;

            cin >> b;

            cout << array[b-1] <<"\n";
        }

        else if(a==2){

            int c;
            
            cin >> c;

            int index=0;

            for(int i=0;i<N;i++){
                                            
                if(array[i]==c){
        
                    index = i+1;
                    break;
                }
            }
        
            cout << index << "\n";


        }
        
        else{
            
            int b,c;
            cin >> b >> c;


            for(int i=b-1;i<c;i++){
                cout << array[i] <<' ';
            }

        cout << "\n";

        }

    }



    return 0;
}