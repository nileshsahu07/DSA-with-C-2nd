#include <iostream>
using namespace std;

int fun(int n){
    if(n==0){
        return 0;
    }
    return(n%10)+fun(n/10);  
}

int main(){

    int n;
    cout<<"Enter Numbers:-";
    cin>>n;

    cout<<fun(n)<<endl;

    return 0;
}