#include <iostream>
using namespace std;

int startGame(int n,int p){
    int Tim;
    int Jose;

    if(p==1){
        if(n%2==0){
            cout<<"Jose is the loser";
        }else{
            cout<<"Tim is the loser";
        }
    }else{
       if(n%2==0){
            cout<<"Tim is the loser";
        }else{
            cout<<"Jose is the loser";
        } 
    }


}

int main(){

    int n;
    cout<<"Enter how many bread slices there:- ";
    cin>>n;

    int player;
    cout<<"Enter which player pick first - for Time(1), for Jose(2):- ";
    cin>>player;

    startGame(n,player);


    return 0;
}