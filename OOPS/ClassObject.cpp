#include <iostream>
using namespace std;

class Punit{
    string name;
    string color;
    long long int c_no;
    string status;

    public:

    void setValue(string n, string c, long long int cn, string s){
        name = n;
        color = c;
        c_no = cn;
        status = s;
    }

    void getValue(){
        cout<<name<<endl;
        cout<<color<<endl;
        cout<<c_no<<endl;
        cout<<status<<endl;
    }
};


int main(){

    Punit p;

    p.setValue("Rahul","Fair",1234567890,"Married");
    p.getValue();

    cout<<endl;

    Punit p2;

    p2.setValue("Nilesh","Fair",1234567890,"single");
    p2.getValue();

    return 0;
}