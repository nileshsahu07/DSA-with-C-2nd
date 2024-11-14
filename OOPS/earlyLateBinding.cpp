#include <iostream>
using namespace std;

class Dummy{
public:
    virtual void F1(){
        cout<<"F1 method dummy1"<<endl;
    }
    void F2(){
        cout<<"F2 method dummy1"<<endl;
    }
    void F3(){
        cout<<"F3 method dummy1"<<endl;
    }
    void F4(){
        cout<<"F4 method dummy1"<<endl;
    }
};

class Dummy2 : public Dummy{
public:
    void F1(){
        cout<<"F1 method dummy1"<<endl;
    }
    void F2(){
        cout<<"F2 method dummy2"<<endl;
    }
    void F3(){
        cout<<"F3 method dummy3"<<endl;
    }
    void F4(){
        cout<<"F4 method dummy4"<<endl;
    }
};

int main(){

    Dummy *d1;

    Dummy2 d2;

    d1 = &d2;

    d1->F1();
    d1->F2();
    d1->F3();
    d1->F4();

    d2.F1();




    return 0;
}