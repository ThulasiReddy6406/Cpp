#include<iostream>
using namespace std;

class Person {
    public:
    string name;
    int age;

    void displayperson(){
        cout<<"Name :- "<<name<<endl;
        cout<<"Age  :- "<<age<<endl;
    }
};

class Student : public Person {
    public:
    int roll_no;

    void displaystudent(){
        cout<<"Student Name         :- "<<name<<endl;
        cout<<"Student Age          :- "<<age<<endl;
        cout<<"Student Roll_No      :- "<<roll_no<<endl;
    }
};

int main(){
    Student s1;
    s1.name = "G.thulasi nadha reddy";
    s1.age = 23;
    s1.roll_no = 12;
    s1.displaystudent();
}