#include <iostream>
using namespace std;

class Person{
public:
    string name;
    int age ;

};

class Teacher : public Person{
public:
    string subject;
};

class Student : public Person{
public:
    int rollNo;
};

class GradeStudent : public Student{
public:
    string researchArea;
};

class TA : public Student, public Teacher{

};

int main(){
    //obj banaker declare karke cout karna hai only

    return 0;
}
