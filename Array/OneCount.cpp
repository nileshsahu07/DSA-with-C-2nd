#include <iostream>
#include <climits>
using namespace std;

int oneCount(int *arr, int n){
    int max = INT_MIN;
    int count = 0;

    for(int i=0; i<n; i++){
        if(arr[i]==1){
            count++;
            if(max<count){
                max = count;
            }
        }else{
            count = 0;
        }
    }
    return max;
};

int main(){

    int arr[12] = {0,0,1,1,1,0,0,0,1,1,1,1};

    cout<<oneCount(arr,12)<<endl;

    return 0;
}