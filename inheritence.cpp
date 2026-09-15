#include<iostream>
using namespace std;

class Animal{
    public:
    string Animal;

    void bark(){
        cout<<"Bow Bow"<<endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout<<"Meow Meow"<<endl;
    }
};

int main(){
    Dog d1;
    d1.Animal = "Cat";
    cout<<"Cat ->";
    d1.bark();

    return 0;
}