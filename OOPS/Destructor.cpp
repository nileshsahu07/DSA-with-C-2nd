#include <iostream>
using namespace std;

class Dummy{
    int a = 20;
    int b = 40;

    public:
    Dummy(){
        cout<<"a :- "<<a<<endl;
        cout<<"b :- "<<b<<endl;
    }

    ~Dummy(){
        cout<<a<<" and "<<b<<" ki value destroy ho gyi hai "<<endl;
    }
};

int main(){
    Dummy d;

    return 0;
}