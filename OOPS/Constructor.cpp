#include <iostream>
using namespace std;

class Dummy{

    int a = 10;
    int b = 20;

    public:
    //Default Constructor
    Dummy(){
        cout<<a<<endl;
        cout<<b<<endl;
    }

    //Parameterized Constructor
    Dummy(int x, int y){
        a = x;
        b = y;

        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }

    //Copy Constructor
    Dummy(Dummy &ref){
        a = ref.a;
        b = ref.b;
    }


    void show(){
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
    }

};

int main(){

    Dummy d1(10,20);

    cout<<"D1 data:- "<<endl;
    d1.show();

    cout<<endl;

    Dummy d2=d1;  // copy constructor call

    cout<<"D2 data:- "<<endl;
    d2.show();

    cout<<endl;

    Dummy d3;
    d3 = d1;     // copy assignment operator

    cout<<"D3 data:- "<<endl;
    d3.show();

    return 0;
}