#include <iostream>
using namespace std;

class Sum{
    int a;
    int b;

public:
    void sum(int x, int y ){
         a = x;
         b = y;

         cout<<"Sum:- "<<a+b<<endl;
    };

    void sub(int x, int y ){
         a = x;
         b = y;

         cout<<"Sub:- "<<a-b<<endl;
    };

};

int main(){
    Sum s1;
    s1.sum(20,20);

    s1.sub(50,30);

    return 0;
}