#include <iostream>
using namespace std;

class picnicByCar{
    bool startEngine = true;

    public:
    void ghumughumi(){

        if(startEngine == true){
            cout<<"Chalo ghumne chalte hai"<<endl;
        }else{
            cout<<"Pahle engine start karo"<<endl;
        }
    }
};

int main(){

    picnicByCar p;

    p.ghumughumi();

    return 0;
}