#include <iostream>
using namespace std;

class Smartphone {
public:
    virtual void takeSelfie() = 0;
    virtual void makeCall() = 0;

    virtual ~Smartphone() {}
};

class Android : public Smartphone {
public:
    void takeSelfie() {
        cout << "Android is taking a selfie." << endl;
    }

    void makeCall() {
        cout << "Android is making a call." << endl;
    }
};

class IPhone : public Smartphone {
public:
    void takeSelfie() {
        cout << "iPhone is taking a selfie." << endl;
    }

    void makeCall() {
        cout << "iPhone is making a call." << endl;
    }
};

int main() {
    Smartphone *ptr;

    ptr = new Android();
    ptr->takeSelfie();
    ptr->makeCall();
    delete ptr;

    cout << endl;

    ptr = new IPhone();
    ptr->takeSelfie();
    ptr->makeCall();
    delete ptr;

    return 0;
}

