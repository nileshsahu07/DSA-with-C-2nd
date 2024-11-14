#include <iostream>
using namespace std;

int partition(int *arr, int s, int e){
    int pivot = arr[s];

    int count = 0;
    for(int i=s; i<=e; i++){
        if(pivot>arr[i]){
            count++;
        }
    }

    int pivotIndex = s+count;

    swap(arr[s],arr[pivotIndex]);

    while(s<e){
        while(arr[s] < arr[pivotIndex]  && s<e){
            s++;
        }
        while(arr[e] > arr[pivotIndex] && e>s){
            e--;
        }
    }

    if(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

    return pivotIndex;
}

void QuickSort(int *arr, int s, int e){
    if(s>=e){
        return;
    }

    int p = partition(arr,s,e);

    QuickSort(arr,s,p-1);

    QuickSort(arr,p+1,e);
}

int main(){

    int arr[] = {4,7,2,3,9,6,5,1};
    int n = sizeof(arr)/sizeof(int);

    cout<<"Array is:- ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    QuickSort(arr,0,n-1);

    cout<<"Sorted array is:- ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}