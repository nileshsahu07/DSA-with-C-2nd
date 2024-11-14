#include <iostream>
using namespace std;

//compile time polymorphism statically hote hai 
//parameter ya to unke number of parameter kam jyada hota hai tab diffrent hote hai ya fir type diffrent hote hai tab diffrent hote hai
class Student{

    public:
    string name;

    Student(){
        cout<<"Non-parameterized Constructor"<<endl;
    }

    Student(string name){
        this->name = name;
        cout<<"Parameterized Constructor"<<endl;
    }
};

int main(){

    // Non parametrized run according to context
    // Student s1;

    //parametrized run according to context
    Student s1("Nilesh");

    return 0;
}