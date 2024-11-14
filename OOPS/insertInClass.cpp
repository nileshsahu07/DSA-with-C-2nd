#include <iostream>
using namespace std;

class Nilesh{
    public:
    string name;
    string color;
    int c_No;
    string status;
};

int main(){

    Nilesh n;

    n.name = "Nilesh";
    n.color = "fair";
    n.c_No = 9876;
    n.status = "single";

    cout<<n.name<<endl;

    Nilesh n2;
    n2.name = "kushal";
    n2.color = "fair";
    n2.c_No = 1234;
    n2.status = "single";

    cout<<n2.name<<endl;




    return 0;
}