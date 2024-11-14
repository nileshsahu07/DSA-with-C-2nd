#include <iostream>
using namespace std;

void reverseStr(char *arr, int s, int e){
    if(s>=e){
        return;
    }

    swap(arr[s],arr[e]);
    s++;
    e--;

    reverseStr(arr,s,e);
}

int main(){

    char arr[] = {'R','A','H','U','L'};

    int n = sizeof(arr);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
    reverseStr(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }




    return 0;
}