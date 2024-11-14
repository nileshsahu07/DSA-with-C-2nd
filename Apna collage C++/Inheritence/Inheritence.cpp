#include <iostream>
using namespace std;

class Person{
public:
    string name;
    int age ;

    //for understanding and non parameterized constructor
    // Person(){
    //       cout<<"I am parent constructor.."<<endl;
    // }

    // ~Person(){
    //     cout<<"I am parent Destructor.."<<endl;
    // }

    // for parameterized constructor
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

class Student : public Person{
public:
    int rollNo;

    //for understanding and non parameterized constructor
    // Student(){
    //     cout<<"I am child constructor.."<<endl;
    //     cout<<endl;
    // }

    // ~Student(){
    //     cout<<endl;
    //      cout<<"I am child Destructor.."<<endl;
    // }

    // for parameterized constructor
    Student(string name, int age, int rollNo) : Person(name, age){
        this->rollNo = rollNo;
    }

    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"RollNo: "<<rollNo<<endl;
    };
};

int main(){

    Student s1("Nilesh",18,1234);
    // s1.name = "Nilesh";
    // s1.age = 18;
    // s1.rollNo = 1234;
    s1.getInfo();

    return 0;
}
