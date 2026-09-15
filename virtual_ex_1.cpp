#include <iostream>
using namespace std;

class Machine {
public:
    // 🪄 ADDED VIRTUAL HERE!
    virtual void turnOn() {
        cout << "Generic machine sound: Click!" << endl;
    }
};

class TV : public Machine {
public:
    void turnOn() override {
        cout << "TV turns on and shows a cartoon! 📺" << endl;
    }
};

int main() {
    TV myTV;
    
    // We still use the exact same generic Machine pointer
    Machine* remoteControl = &myTV;
    
    // We press the button!
    remoteControl->turnOn(); 
    
    return 0;
}
