#include <iostream>
using namespace std;

// function Overloading class or function ke name same ho agar or parameter diffrent ho tab hoti hai return type same ho ya diffrent usse fark nhi padta
class Print{
public:
    void show(int x){
        cout<<"Int :- "<<x<<endl;
    };

    void show(char ch){
        cout<<"Char :- "<<ch<<endl;
    }
};

int main(){
    Print p1;

    //Int run depending upon context
    // p1.show(101);

    //char run depending upon context
    p1.show('&');


    return 0;
}