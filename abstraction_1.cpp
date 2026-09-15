#include <iostream>
using namespace std;

class ATM {
private:
    double balance;

public:
    // Constructor
    ATM(double initialBalance) {
        balance = initialBalance;
    }

    void withdraw(int money) {
        balance -= money;
        cout << "Amount Withdrawced :- " << money << endl;
    }
    void diposit(int money){
        balance += money;
        cout << "Current Balance after deposit  :- " << balance << endl;
    }

    void showBalance() {
        cout << "Current Balance :- " << balance << endl;
    }
};

int main() {

    ATM a1(10000);   // Initial balance = 10000

    a1.showBalance();

    a1.diposit(20000);

    a1.withdraw(2000);

    a1.showBalance();

    return 0;
}