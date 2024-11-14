#include <iostream>
using namespace std;

class Parent{
public:
    void getInfo(){
        cout<<"Parent Class\n";
    };
};

class Child : public Parent{
public:
    void getInfo(){
        cout<<"Child class\n";
    }
};

int main(){
    // Child c1;
    // c1.getInfo();

    Parent p1;
    p1.getInfo();

    return 0;
}