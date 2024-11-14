#include <iostream>
using namespace std;


int main(){
    // int n;
    // cout<<"Enter a number:- ";
    // cin>>n;

    // int *arr = new int[n];

    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }

    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }

    // cout<<endl;

    // int s=0;
    // int e=n-1;

    // while(s<e){
    //     swap(arr[s],arr[e]);
    //     s++;
    //     e--;
    // }

    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }

    int arr[] = {1,2,-4,-9,-3,0,0,0,0};

    int n = sizeof(arr)/sizeof(int);

    int zero = 0;
    int positive = 0;
    int negetive = 0;

    for(int i=0; i<n; i++){
        if(arr[i]==0){
            zero++;
        }
    }

        for(int i=0; i<n; i++){
        if(arr[i]>0){
            positive++;
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i]<0){
            negetive++;
        }
    }


    cout<<zero<<endl;
    cout<<negetive<<endl;
    cout<<positive<<endl;





    return 0;
}