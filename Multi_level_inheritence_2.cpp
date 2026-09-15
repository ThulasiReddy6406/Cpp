#include<iostream>
using namespace std;

class Animal{
    public:
    string name;
    string color;
};

class Mammal : public Animal{
    public:

    string height;
};

class Dog : public Mammal{
    public:
    void bark(){
        cout<<"BOW BOW"<<endl;
    }
};


int main(){
    Dog d1;
    d1.name ="German shepard";
    d1.color = "Brown-Black mix";
    d1.height = "12 feets";
    cout<<"Dog  Name  :- "<<d1.name<<endl;
    cout<<"Dog Color  :- "<<d1.color<<endl;
    cout<<"Dog Height :-"<<d1.height<<endl;
    
    d1.bark();

}