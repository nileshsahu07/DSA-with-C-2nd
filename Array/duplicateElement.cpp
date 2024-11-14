#include <iostream>
using namespace std;

int duplicate(char *arr, int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                 return i;
            }
           
        }
    }
}
  
int main(){
    char arr[] = {'e','k','y','a','a'};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< duplicate(arr,n)<<endl;

    return 0;
}