#include <iostream>
using namespace std;

int isPrime(int num){
    if(num < 2){
        return false;
    }else{
        for(int i=2; i<num; i++){
            if(num % i == 0){
                return false;
            }
        }
    }
    return true;
}

int primeNum(int *arr, int n){
    cout<<"Prime Element is:- ";
    for(int i=0; i<n; i++){
      if(isPrime(arr[i])){
        cout<<arr[i]<<" ";
      }else{
        cout<<"0";
      }
    }
}

int main(){

    int n;
    cout<<"Enter the size of an Array:- ";
    cin>>n;
    
    int arr[n];

    cout<<"Enter inputs in array:- ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Array is:- ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

   primeNum(arr,n);

    return 0;
}