#include<iostream>
using namespace std;

class Grandparent{
    public:
    void showGrandparent(){
        cout<<"Grand parent"<<endl;
    }
};
class Parent : public Grandparent{
    public:
    void showparent(){
        cout<<"Parent"<<endl;
    }
};
class child : public Parent{
    public:
    void showchild(){
        cout<<"child"<<endl;
    }

};

int main(){
    child c1;
    c1.showGrandparent();
    c1.showparent();
    c1.showchild();
    return 0;
}