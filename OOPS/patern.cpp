#include <iostream>
using namespace std;

class Patern{

    public:

    void show(){
        for(int i=1; i<=5; i++){
            for(int j=1; j<=i; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }

};

int main(){

    Patern p;

    p.show();

    return 0;
}