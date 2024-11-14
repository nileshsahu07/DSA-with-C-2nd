#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int arr[] = {12,9,25,18,31,5,20,2};

    int size = sizeof(arr)/sizeof(int);

    sort(arr+0,arr+size);  //index 0 se n-1 tak chalta hai isliye hamne ye likha hai lakin kisi me bhi hum 0 ko plus karte hai to koi fark nhi padta isliye hum 0 hata bhi sakte hai

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}