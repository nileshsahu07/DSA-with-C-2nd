#include <iostream>
using namespace std;

class ABC{
    public:
        ABC(){
            cout<<"Constructor\n";
        }

        ~ABC(){
            cout<<"Destructor\n";
        }
};

int main(){
    // if(true){
    //     ABC obj;
    // };

    if(true){
        static ABC obj;
    };

    cout<<"end of main function\n";

    return 0;
}