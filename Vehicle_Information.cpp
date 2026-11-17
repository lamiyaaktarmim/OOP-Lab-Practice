
#include <iostream>
using namespace std;

class Vehicle {
public:
    void displayVehicleInfo() {
        cout << "This is a Vehicle." << endl;
    }
};

class Car : public Vehicle {
public:
    string brand;
    int doors;

    void carInfo() {
        cout << "Car Brand: " << brand << endl;
        cout << "Number of Doors: " << doors << endl;
    }
};

class Bus : public Vehicle {
public:
    int routeNumber;
    int passengerCapacity;

    void busInfo() {
        cout << "Route Number: " << routeNumber << endl;
        cout << "Passenger Capacity: " << passengerCapacity << endl;
    }
};

int main() {
    Car c;
    c.brand = "Toyota";
    c.doors = 4;

    Bus b;
    b.routeNumber = 10;
    b.passengerCapacity = 50;

    cout << "Car Information:" << endl;
    c.displayVehicleInfo();
    c.carInfo();

    cout << endl;

    cout << "Bus Information:" << endl;
    b.displayVehicleInfo();
    b.busInfo();

    return 0;
}

