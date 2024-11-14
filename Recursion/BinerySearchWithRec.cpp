#include <iostream>
#include <algorithm>
using namespace std;

// void sort(int *arr, int n){
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if(arr[i]>arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
// }

int BinerySearch(int *arr, int s, int e, int key){
    int mid = s+(e-s)/2;
    if(s>e){
        return -1 ;
    }

    if(arr[mid] == key){
        return mid;
    }else if(arr[mid]>key){
       return BinerySearch(arr,s,mid-1,key);
    }else{
        return BinerySearch(arr,mid+1,e,key);
    }
}

int main(){

    int arr[] = {12,9,25,18,31,5,20,2};

    int size = sizeof(arr)/sizeof(int);

    // sort(arr,size);
    sort(arr+0,arr+size);

    int key;
    cout<<"Enter key:- ";
    cin>>key;

    int s = 0;
    int e = size-1;

    int index = BinerySearch(arr,s,e,key);

    if(index==-1){
        cout<<key<<" is not found";
    }else{
        cout<<key<<" is found on index no :- "<<index;
    }

    return 0;
}