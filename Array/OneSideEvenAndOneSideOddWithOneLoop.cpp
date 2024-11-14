#include <iostream>
using namespace std;

int sagrate(int *arr, int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        if(arr[s]%2==0){
            s++;
        }else if(arr[e]%2==1){
            e--;            
        }else if(s<e){
            swap(arr[s], arr[e]);
            s++;
            e--;            
        }
    }
}


void takeInput(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value of " << i << " index in Array:- ";
        cin >> arr[i];
    }
    cout << endl;
}

void printArray(int *arr, int n)
{
    cout << "Array is:- ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int n;
    cout << "Enter the size of an Array:- ";
    cin >> n;

    int *arr = new int[n];

    takeInput(arr, n);
    printArray(arr, n);

    sagrate(arr, n);
    printArray(arr, n);

    return 0;
}