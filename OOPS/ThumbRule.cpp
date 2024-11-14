#include <iostream>
using namespace std;

class Dummy{
    int a;
    int b;

    public:
    Dummy(int a, int b){
        this->a = a;
        this->b = b;
    }

    void show(){
        cout<<"a :- "<<a<<endl;
        cout<<"b :- "<<b<<endl;
    }
};

int main(){ 

    cout<<"Compile time per:- "<<endl;
    Dummy d1(10,20);
    d1.show();

    cout<<endl;

    cout<<"Run time per:- "<<endl;
    Dummy *d2 = new Dummy(20,40);
    d2 ->show();


    return 0;
}