#include<iostream>
using namespace std;

class Father{
    public:
    void showfather(){
        cout<<"Father class"<<endl;
    }
};
class Mother{
    public:
    void showmother(){
        cout<<"Mother class"<<endl;
    }
};
class Child : public Father , public Mother{
    public:
    void showchild(){
        cout<<"Child class"<<endl;
    }
};

int main(){
    Child c1;
    c1.showfather();
    c1.showmother();
    c1.showchild();

    return 0;
}