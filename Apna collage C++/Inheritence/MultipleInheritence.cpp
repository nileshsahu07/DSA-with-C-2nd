#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int rollNo ;

};

class Teacher{
public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher{

};

int main(){

   TA t1;
    t1.name = "tony stark";
    t1.subject = "CS";
    t1.rollNo = 1234;
    t1.salary = 25000;

    cout<<t1.name<<endl;
    cout<<t1.subject<<endl;
    cout<<t1.rollNo<<endl;
    cout<<t1.salary<<endl;

    return 0;
}
