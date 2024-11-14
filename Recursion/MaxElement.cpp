#include <iostream>
using namespace std;

int MaxElement(int *arr, int i , int n){
    if(i==n){
        return arr[0];
    }

    int maxEle =  MaxElement(arr,i+1,n);

    if(arr[i]>maxEle){
        return maxEle = arr[i];
    }else{
        return maxEle;
    }
}

int main(){

    int n;
    cout<<"Enter size of an array:- ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements in array:- ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Array is:- ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"Max Element is:- "<<MaxElement(arr,0,n-1);


    return 0;
}