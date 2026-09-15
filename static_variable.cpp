#include <iostream>
using namespace std;

void fun() {
    static int x = 0;
    x++;
    cout << x << " ";
}

int main() {
    for(int i=0;i<=9;i++){
        fun();
    };
}