#include<iostream>
using namespace std;

class Teacher{
    public:
    virtual void sound() = 0;
};

class Student : public Teacher{
    public:
    void sound(){
        cout<<"Thulasi nadha reddy"<<endl;
    };
};

class Principal : public Teacher{
    public:
    void sound(){
        cout<<"Rakshitha patel"<<endl;
    }
};

int main(){
    Student s1;
    s1.sound();
    Principal p1;
    p1.sound();
}