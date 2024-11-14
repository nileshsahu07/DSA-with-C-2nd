//Encapsulation

#include <iostream>
using namespace std;

class SweetShop{
    
    //Quantity of Sweets
    int Rasgulla;
    int Barfi;
    int Jalebi;
    int Laddu;

    public:
    SweetShop(int r, int b, int j, int l){
        Rasgulla = r;
        Barfi = b;
        Jalebi = j;
        Laddu = l;
    }

    void showQuantity(){
        cout<<"Rashgulla :- "<<Rasgulla<<endl;
        cout<<"Barfi :- "<<Barfi<<endl;
        cout<<"Jalebi :- "<<Jalebi<<endl;
        cout<<"Laddu :- "<<Laddu<<endl;
    }   
};

int main(){

    SweetShop ss(20, 50, 60, 100);

    ss.showQuantity();

    cout<<sizeof(SweetShop)<<endl;
    cout<<sizeof(ss)<<endl;

    return 0;
}