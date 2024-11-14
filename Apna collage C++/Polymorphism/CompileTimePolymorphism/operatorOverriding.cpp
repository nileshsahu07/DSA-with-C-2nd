#include <iostream>
using namespace std;

class Dummy{
    int a;
    int b;

    public:
    Dummy(){};

    Dummy(int x, int y){
        a = x;
        b = y;
    }

    Dummy operator-(){
        Dummy temp;
        (temp.a) = -a;
        (temp.b) = -b;

        return temp;
    }

    void show(){
        cout<<a<<" "<<b<<endl;
    }
};

int main(){

    Dummy d1(20,40);

    d1.show();
    cout<<endl;

    Dummy d2;
    d2 = -d1;

    d1.show();
    d2.show();


    return 0;
}