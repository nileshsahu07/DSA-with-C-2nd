#include <iostream>
using namespace std;

class Perfect{
public:
    bool isPerfect(int n){
        int sum = 0;

        for(int i=1; i<=n/2; i++){
            if(n%i==0){
                sum = sum+i;
            }
        }

        if(n == sum){
            return true;
        }else{
            return false;
        }
    }

};

int main(){

    int n;
    cout<<"Enter a Number:- ";
    cin>>n;

    Perfect p;

    if(p.isPerfect(n)){
        cout<<"Yes it is a perfect number";
    }else{
        cout<<"No it is not a perfect number";
    }

    return 0;
}