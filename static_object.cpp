#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Constructor\n";
    }

    ~Test() {
        cout << "Destructor\n";
    }
};

void fun() {
    static Test obj;
    cout << "Function\n";
}

int main() {
    fun();
    fun();
}