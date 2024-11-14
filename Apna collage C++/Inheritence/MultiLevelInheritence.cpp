#include <iostream>
using namespace std;

class Person{
public:
    string name;
    int age ;

};

class Student : public Person{
public:
    int rollNo;
};

class GradeStudent : public Student{
public:
    string researchArea;
};


int main(){

    GradeStudent s1;
    s1.name = "tony stark";
    s1.researchArea = "CS";

    cout<<s1.name<<endl;
    cout<<s1.researchArea<<endl;

    return 0;
}
