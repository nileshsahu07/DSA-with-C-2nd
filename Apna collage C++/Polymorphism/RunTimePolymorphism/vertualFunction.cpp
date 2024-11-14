#include <iostream>
using namespace std;

class Parent{
public:
    virtual void getInfo(){
        cout<<"Parent info Class\n";
    };

    void hello(){
        cout<<"Parent hello class\n";
    }
};

class Child : public Parent{
public:
    void getInfo(){
        cout<<"Child info class\n";
    }

    void hello(){
        cout<<"Child hello class\n";
    }
};

int main(){
    Parent *p1;

    Child c1;

    p1 = &c1;

    p1->getInfo();
    p1->hello();

    cout<<endl;

    c1.getInfo();
    c1.hello();


    return 0;
}