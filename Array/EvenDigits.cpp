#include <iostream>
using namespace std;

int digit(int value){
    int count = 0;
    while(value!=0){
        count++;
        value = value/10;
    }
    return count;
    
}

int countDigit(int *arr, int n){
    int count =0;
    for(int i=0; i<n; i++){
        if(digit(arr[i])%2==0){
            count++;
        }
    }
    return count;
}

void takeInput(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<"Enter the value of "<<i<<" index in Array:- ";
        cin>>arr[i];
    }
    cout<<endl;
}

void printArray(int *arr, int n){
    cout<<"Array is:- ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

   int n;
   cout<<"Enter the size of an Array:- ";
   cin>>n;

    int *arr = new int[n];

    takeInput(arr,n);
    printArray(arr,n);

    int ans = countDigit(arr,n);

    cout<<"Even digits in array:- "<<ans<<endl;

    return 0;
}