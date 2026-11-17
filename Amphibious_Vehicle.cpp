
#include <iostream>
using namespace std;

class LandVehicle {
public:
    void landInfo() {
        cout << "This vehicle can travel on land." << endl;
    }
};

class WaterVehicle {
public:
    void waterInfo() {
        cout << "This vehicle can travel on water." << endl;
    }
};

class AmphibiousVehicle : public LandVehicle, public WaterVehicle {
public:
    void displayVehicleType() {
        cout << "This is an Amphibious Vehicle." << endl;
    }
};

int main() {
    AmphibiousVehicle a;

    a.landInfo();
    a.waterInfo();
    a.displayVehicleType();

    return 0;
}




