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

    //destructor
    ~Student(){
        cout<<"Hi, I delete everything\n";
        delete cgpaPtr; // memery leak na ho isliye bhi iska use karte hai hum
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"CGPA: "<<*cgpaPtr<<endl;
    };
};

int main(){
    Student s1("Rahul Kumar",8.9);
    s1.getInfo();


    return 0;
}
