#include<iostream>
using namespace std;

class Animal{
    public:
    string name;
};
class Dog : public Animal{
    public:
    void bark(){
        cout<<"bark"<<endl;
    }
};
class Cat : public Animal{
    public:
    void meow(){
        cout<<"meow"<<endl;
    }
};

int main(){
    Dog d1;
    Cat c1;
    d1.name = "Dog";
    c1.name = "cat";
    cout<<d1.name<<endl;
    cout<<c1.name<<endl;
    d1.bark();
    c1.meow();
}