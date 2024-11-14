#include <iostream>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s+(e-s)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int [len1];
    int *second = new int [len2];

    //copy left side elements
    int k = s;
    for(int i=0; i<len1; i++){
        first[i]==arr[k];
        k++;
    }

    //copy right side elements
    k = mid+1;
    for(int i=0; i<len2; i++){
        second[i] = arr[k];
        k++;
    }

    //copy both array elements in main array
    int mainIndex = s;

    int i= 0;
    int j= 0;

    while(i<len1 && j<len2){
        if(first[i]<second[j]){
            mainIndex = first[i];
            i++;
        }else{
            mainIndex = second[j];
            j++;
        }
        mainIndex++;
    }

    //for remaining elements
    while(i<len1){
        arr[mainIndex] = first[i];
        i++;
        mainIndex++;
    }

    while(j<len2){
        arr[mainIndex] = second[j];
        j++;
        mainIndex++;
    }
}

void mergeSort(int *arr, int s, int e){
    if(s>=e){
        return;
    }

    int mid = s+(e-s)/2;

    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}

int main(){

    int arr[] = {4,7,2,3,9,6,5,1};
    int n = sizeof(arr)/sizeof(int);

    cout<<"Array is:- ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    mergeSort(arr,0,n-1);

    cout<<"Sorted array is:- ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}