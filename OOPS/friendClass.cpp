#include <iostream>
using namespace std;

class A{
    int p = 10;
    int q = 20;

    public:

    void show(){
        cout<<"p: "<<p<<endl;
        cout<<"q: "<<q<<endl;
    }

    friend class B;

};

class B{
    int p;
    int q;

    public:

    B(A a){
        p = a.p;
        q = a.q;
    }

    void show(){
        cout<<"p: "<<p<<endl;
        cout<<"q: "<<q<<endl;
    }
};

int main(){

    A a1;
    a1.show();

    cout<<endl;

    B b1(a1);
    b1.show();

    return 0;
}