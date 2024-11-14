#include <iostream>
#include <string>

using namespace std;

// properties aur methods ko class me ek sath likhna hi encapsulatuion kahlata hai 
// encapsulation data hiding me bhi kaam aata hai. jese koi bhi information hame class ke bahar accessible nhi banani ho use private ker denge ise hi data hiding kahte hai
class Teacher{
    private:
    double salary; //data hiding 

    public:
    //non parameterized constructor
    Teacher(){
        department = "Computer Science";  //example of constructor
    }

    string name;
    string subject;
    string department;

    void changeDept(string newDept){
        department = newDept;
    }  

    //setter
    void setSalary(double s){
        salary = s;
    } 

    //getter
    double getSalary(){
        return salary;
    }

};

int main(){
    Teacher t1;
    t1.name = "Nilesh";
    t1.subject = "C++";
    // t1.department = "Computer Science";

    // t1.salary = 25000;

    t1.setSalary(25000);

    cout<<t1.getSalary()<<endl;

    cout<<t1.name<<endl;

    cout<<t1.department<<endl;

    return 0;
}