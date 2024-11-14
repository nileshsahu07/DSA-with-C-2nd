#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string arr, int s, int e){
    if(s>=e){
        return true;
    }

    if(arr[s]!=arr[e]){
        return false;
    }

    s++;
    e--;

    isPalindrome(arr,s,e);
}

int main(){

    string name;
    cout<<"Enter Your Name:- ";
    cin>>name;

    int n = name.size();

    if(isPalindrome(name,0,n-1)){
        cout<<name<<" is Palindrome";
    }else{
        cout<<name<<" is not Palindrome";
    }

    return 0;
}