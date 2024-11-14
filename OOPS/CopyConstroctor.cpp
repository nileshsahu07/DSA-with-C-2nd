#include <iostream>
using namespace std;

class A{
    public:

    int a;
    int b;

    A(){}

    A(int x, int y){
        a = x;
        b = y;
    }

    void show(){
        cout<<"a :- "<<a<<endl;
        cout<<"b :- "<<b<<endl;
    }
};

class B{
    int p;
    int q;

    public:
    B(){}

    B(A &ref){
        p = ref.a;
        q = ref.b;
    }

    void show(){
        cout<<"a :- "<<p<<endl;
        cout<<"b :- "<<q<<endl;
    }
};

int main(){
    A a(100,200);
    a.show();

    B b;
    b = a;
    b.show();

    return 0;
}