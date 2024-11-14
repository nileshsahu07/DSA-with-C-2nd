#include <iostream>
using namespace std;

int count(int n){
    int count = 0;

    while(n!=0){
        count++;
        n = n/10;
    }
    return count;
}

int pow(int rem , int countDigit){
    int pow = 1;
    while(countDigit!=0){
        pow = pow * rem;
        countDigit--;
    }
    return pow;
}
 
bool isArmstrong(int n){

    int temp = n;
    int sum = 0;
    int rem = 0;

    int countDigit = count(n);
 
    while(temp!=0){
        rem = temp%10;
        sum = sum + pow(rem, countDigit);
        temp = temp/10;
    }

    if(sum == n){
        return true;
    }else{
        return false;
    }
}


int main(){

    int n = 0;

    int *arr = new int[n];

    cout<<endl;

    for(int i=0; i<1000; i++){

        if(isArmstrong(i)){
            arr[n] = i;
            n++;
        }

    }

    cout<<n<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}