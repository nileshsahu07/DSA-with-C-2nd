#include <iostream>
using namespace std;

void fun(){

    //Without static
    // int x = 0;
    // cout<<"x is :- "<<x<<endl;
    // x++;

    //with static
    static int x = 0; //initial statment 1 baar hi run hogi static karne ke baad baki dono statement har baar run hogi
    cout<<"x is :- "<<x<<endl;
    x++;

}

int main(){
    fun();
    fun();
    fun();

    return 0;
}