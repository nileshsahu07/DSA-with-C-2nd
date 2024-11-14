#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &obj){
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
    };
};

int main(){
    Student s1("Rahul Kumar",8.9);

    Student s2(s1); //neha kumari
    s2.name = "Neha Kumari";

    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();
    s2.getInfo();

    //problem yeh hai ki hamne to s2 yani only neha ki cgpa 9.2 change ki hai but isne automatically rahul ki bhi 9.2 hi ker di

    return 0;
}
