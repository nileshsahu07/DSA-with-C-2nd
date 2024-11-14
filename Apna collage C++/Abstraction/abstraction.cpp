#include <iostream>
using namespace std;

class Shape{ //abstract class
   virtual void draw() = 0; //Pure virtual function
};

class Circle : public Shape{
    public:
        void draw(){
            cout<<"Drawing a circle\n";
        }
};

int main(){

    Circle c1;
    c1.draw();

    return 0;
}