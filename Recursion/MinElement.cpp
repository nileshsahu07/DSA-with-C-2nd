#include <iostream>
using namespace std;

int MinElement(int *arr, int i, int n){
    if(i==n){
        return arr[0];
    }

    int minEle = MinElement(arr,i+1,n);

    if(arr[i]<minEle){
        return minEle = arr[i];
    }else{
        return minEle;
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

    cout<<"Min Element is:- "<<MinElement(arr,0,n-1);


    return 0;
}