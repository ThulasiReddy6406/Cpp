#include<iostream>
using namespace std;

class Students{
    public:
    static int count;

    Students(){
        count ++;
    };
};

int Students :: count = 0;

int main() {

    Students s1;
    Students s2;
    Students s3;

    cout << Students::count;

    return 0;
}


