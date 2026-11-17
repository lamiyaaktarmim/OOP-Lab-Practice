
#include <iostream>
using namespace std;

class Payment {
public:
    virtual void processPayment() = 0;

    virtual ~Payment() {}
};

class CreditCardPayment : public Payment {
public:
    void processPayment() {
        cout << "Payment processed using Credit Card." << endl;
    }
};

class MobileBankingPayment : public Payment {
public:
    void processPayment() {
        cout << "Payment processed using Mobile Banking." << endl;
    }
};

int main() {
    Payment *ptr;

    ptr = new CreditCardPayment();
    ptr->processPayment();
    delete ptr;

    ptr = new MobileBankingPayment();
    ptr->processPayment();
    delete ptr;

    return 0;
}

