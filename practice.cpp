#include <iostream>
using namespace std;

int main(){
    int i;
    int n;
    cout<<"Enter a value:- ";
    cin>>n;

    for(i=1;i<=n;i++){
        if(i==n/2){
            break;
        }
        cout<<i<<" ";
    }
}