#include <iostream>
using namespace std;

class Nilesh{
    string name;
    string color;
    int c_No;
    string status;

    public:
    void setValue(string n, string c, long long int cn, string s){
        name = n;
        color = c;
        c_No = cn;
        status = s;
    };

    void getValue(){
        cout<<name<<endl;
        cout<<color<<endl;
        cout<<c_No<<endl;
        cout<<status<<endl;
    }
};

int main(){

    Nilesh p;
    Nilesh p2;

    p.setValue("Nilesh","Fair",9461196414,"Single");
    p2.setValue("Kushal","Fair",9461196414,"Single");

    p.getValue();

    cout<<endl;

    p2.getValue();






    return 0;
}