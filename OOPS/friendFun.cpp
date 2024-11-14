#include <iostream>
using namespace std;

class Ankit;

class Ankush{
    int money = 20;

    friend void rohit(Ankit, Ankush);
};

class Ankit{
    int money = 10;

    friend void rohit(Ankit, Ankush);
};

void rohit(Ankit r1, Ankush r2){
    cout<<"Total Money :- "<<r1.money+r2.money<<endl;
}

int main(){
    Ankit obj1;
    Ankush obj2;

    rohit(obj1,obj2);

    return 0 ;
}