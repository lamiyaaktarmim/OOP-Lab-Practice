
#include <iostream>
using namespace std;

class Vehicle {
public:
    void vehicleInfo() {
        cout << "This is a Vehicle." << endl;
    }
};

class Fare {
public:
    void fareInfo() {
        cout << "Transportation Fare: 100 Tk" << endl;
    }
};

class Car : public Vehicle {
public:
    void carInfo() {
        cout << "This is a Car." << endl;
    }
};

class Bus : public Vehicle, public Fare {
public:
    void busInfo() {
        cout << "This is a Bus." << endl;
    }
};

int main() {
    Car c;
    Bus b;

    cout << "Car Information:" << endl;
    c.vehicleInfo();
    c.carInfo();

    cout << endl;

    cout << "Bus Information:" << endl;
    b.vehicleInfo();
    b.fareInfo();
    b.busInfo();

    return 0;
}

