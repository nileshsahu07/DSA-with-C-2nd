#include <iostream>
using namespace std;

int Bubblesort(int *arr, int n){
    if(n==0){
        return 0;
    }

    if(arr[n-1]<arr[n-2]){
        swap(arr[n-1],arr[n-2]);
    }

     Bubblesort(arr,n-1);
}

int main(){

    int arr[] = {12,9,25,18,31,5,20,2};

    int size = sizeof(arr)/sizeof(int);

    Bubblesort(arr,size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}