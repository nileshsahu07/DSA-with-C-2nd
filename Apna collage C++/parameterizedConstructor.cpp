#include <iostream>
#include <string>
using namespace std;

class Teacher{
    string name;
    string subject;
    string department;
    double salary;
    
 public:
    // Teacher(string n, string sub, string dep, double sal){
    //     name = n;
    //     department = dep;
    //     subject = sub;
    //     salary = sal;
    // };

    // this pointer
     Teacher(string name, string subject, string department, double salary){
        this->name = name;
        this->department = department;
        this->subject = subject;
        this->salary = salary;
    };

    

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Subject: "<<subject<<endl;
    }

};

int main(){
    Teacher t1("Nilesh","C++","CS",25000);
    t1.getInfo();

    return 0;
}