#include <iostream>
#include <climits>
using namespace std;

int fun(int *arr, int n){
    int max = arr[0];
    int high = INT_MIN;
    int secondHigh = 0;
    for (int i=0; i<n; i++){
        if(max<arr[i]){
            max = arr[i];
        }
        else if(secondHigh>high && secondHigh<max){
            secondHigh = arr[i];
        }
    }
    cout<<max<<" ";
    cout<<secondHigh;
}

int main(){

    int arr[7] = {2,9,1,6,23,5,10};

    fun(arr,7);


    return 0;
}