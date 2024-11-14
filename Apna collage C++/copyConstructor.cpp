#include <iostream>
#include <string>
using namespace std;

class Teacher{
    string name;
    string subject;
    string department;
    double salary;
    
 public:
    Teacher(string n, string sub, string dep, double sal){
        name = n;
        department = dep;
        subject = sub;
        salary = sal;
    };

    //copy constroctor
    Teacher(Teacher & orgObj){
        cout<<"I am custom copy constructor\n";
        this->name = orgObj.name;
        this->department = orgObj.department;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Subject: "<<subject<<endl;
    }

};

int main(){
    Teacher t1("Nilesh","C++","CS",25000);
    // t1.getInfo();

    Teacher t2(t1); //defalut copy constructor invoked
    t2.getInfo();

    return 0;
}