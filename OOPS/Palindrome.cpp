#include <iostream>
using namespace std;

class Palindrome{

    public:
    bool isPalindrome(int n){
        int temp = n;
        int rem = 0;
        int sum = 0;

        while(temp!=0){
            rem = temp % 10;
            sum = sum * 10 + rem;
            temp = temp / 10;
        }

        if(n == sum ){
            return true;
        }else{
            return false;
        }
    }
};

int main(){

    Palindrome p;

    if(p.isPalindrome(151)){
        cout<<"Yes it is a Palindrome number";
    }else{
        cout<<"No it is not a Palindrome number";
    }

    return 0;
}