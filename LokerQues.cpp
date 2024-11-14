#include <iostream>
using namespace std;

int startDetecting(int *arr, int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                return i;
            }
        }
    }
}

int main(){

    int lokers[6] = {35,17,22,22,35,50};

    cout<<"The first time repeated locker number appears on index :- "<<startDetecting(lokers,6)<<endl;

    return 0;
}