#include<iostream>
using namespace std;

class Academic{
    public:
    int marks;
};

class Sports{
    public:
    int score;
};

class Student : public Academic , public Sports{
    public:

    void show(){
        cout<<"Marks :- "<<marks<<endl;
        cout<<"Score :-"<<score<<endl;
    }
};

int main(){
    Student s1;
    s1.marks = 123;
    s1.score = 34.5;
    s1.show();
    return 0;
}