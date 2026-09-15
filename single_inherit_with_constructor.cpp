#include<iostream>
using namespace std;

class Vehicle{
    public:
    Vehicle(){
        cout<<"Vehicle constructor\n";
    }
};

class Car : public Vehicle{
    public:
    Car(){
        cout<<"Car constructor";
    }
};

int main(){
    Car c1;

    return 0;
}