#include <iostream>
using namespace std;


int fun(int *arr, int n){  
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i], arr[count]);
            count++;
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}



int main(){

    int arr[10] = {1,0,0,0,3,4,0,5,6,7};

    fun(arr,10);

    return 0;
}