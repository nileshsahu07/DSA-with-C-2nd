#include <iostream>
using namespace std;

class Sum{
    protected:
    int x;
    int y;

    public:

    Sum(){};

    Sum(int a, int b){
        x=a;
        y=b;
    }

    void sum(){
        cout<<"Sum :- "<<x+y<<endl;
    }
};

class Sub : public Sum{

    public:

    Sub(int a, int b){
        x=a;
        y=b;
    }

    void sub(){
        cout<<"Sub :- "<<x-y<<endl;
    }
};

int main(){

    Sum s(100, 50);

    s.sum();

    Sub su(30,10);

    su.sub();

    su.sum();


    return 0;
}