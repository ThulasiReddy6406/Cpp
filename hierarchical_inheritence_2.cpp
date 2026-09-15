#include<iostream>
using namespace std;

class Shape{
    public:
    void display(){
        cout<<"Display"<<endl;
    }
};

class Circle : public Shape{
    public:
    void circleare(){
        cout<<"PI*R*R"<<endl;
    }
};

class Rectangle : public Shape{
    public:
    void rectanglearea(){
        cout<<"length x breadth"<<endl;
    }
};

int main(){
    Circle c1;
    Rectangle r1;
    c1.display();
    c1.circleare();
    r1.display();
    r1.rectanglearea();
}