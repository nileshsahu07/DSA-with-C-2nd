#include <iostream>
using namespace std;

class Prime{
    int n;

    public:

    void setValue(int num){
         n = num ;
    }

    bool isPrime(){
        if(n==0 || n==1){
            return false;
        }else{
            for(int i=2; i<n; i++){
                if(n%i == 0){
                    return false;
                }
            }
        }
        return true;
    }
};

int main(){
    Prime p;

    int n;
    cout<<"Enter a Number:- ";
    cin>>n;

    p.setValue(n);


    if(p.isPrime()){
        cout<<"Number is Prime";
    }else{
        cout<<"Number is not Prime";
    }


    return 0;
}