#include <iostream>
#include <string>
using namespace std;

// jab jab object create hota hai tab tab constructor call hota hai. hum nhi banate to bydefalut call hota hai or hum bana dete hai to bydefaylt call nhi hota 
// constructor isliyr bhi kaam aata hai agar hume sabhi object ke liye same value rakhni ho jese sabhi teacher ke department same rakhna ho to bhi constructor ka use karte hai
class Teacher{
    public:
    Teacher(){
        cout<<"Hi, I am Constructor\n";
    };

    
};

int main(){

    Teacher t1; //constructor call
    Teacher t2; //constructor call

    return 0;
}