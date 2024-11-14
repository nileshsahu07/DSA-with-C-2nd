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

    // Deep copy
    Student(Student &obj){
        this->name = obj.name;
        cgpaPtr = new double;  // is line me pahle to hamne dubara se dynamically memory allocate ki
        *cgpaPtr = *obj.cgpaPtr; // isme jo value original obj me store hai whi value isme store karwa di ab hum main me jaker value change ker denge dusre obj ki ab pahle me koi changes nhi honge
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
    *(s2.cgpaPtr) = 9.2; // ab yha hamne changes kiye dusre obj me or ab pahle me nhi ho rhe changes
    s1.getInfo();
    s2.getInfo();

    return 0;
}
