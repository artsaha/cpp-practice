#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

// Base Class: Vehicle
class Vehicle {
protected:
    string make;
    string model;
    int year;
    double mileage;

public:
    Vehicle(const string& make, const string& model, int year, double mileage)
        : make(make), model(model), year(year), mileage(mileage) {}

    virtual ~Vehicle() = default;

    virtual void displayInfo() const {
        cout << "Make: " << make << ", Model: " << model << ", Year: " << year << ", Mileage: " << mileage << " km";
    }

    const string& getMake() const { return make; }
    const string& getModel() const { return model; }
    int getYear() const { return year; }
    double getMileage() const { return mileage; }

    void setMake(const string& make) { this->make = make; }
    void setModel(const string& model) { this->model = model; }
    void setYear(int year) { this->year = year; }
    void setMileage(double mileage) { this->mileage = mileage; }

    bool operator==(const Vehicle& other) const {
        return make == other.make && model == other.model && year == other.year;
    }
};

ostream& operator<<(ostream& os, const Vehicle& vehicle) {
    vehicle.displayInfo();
    return os;
}

// Derived Class: Car
class Car : public Vehicle {
    string bodyStyle;

public:
    Car(const string& make, const string& model, int year, double mileage, const string& bodyStyle)
        : Vehicle(make, model, year, mileage), bodyStyle(bodyStyle) {}

    void displayInfo() const override {
        Vehicle::displayInfo();
        cout << ", Body Style: " << bodyStyle;
    }
};

// Derived Class: Truck
class Truck : public Vehicle {
    double maxLoadCapacity;

public:
    Truck(const string& make, const string& model, int year, double mileage, double maxLoadCapacity)
        : Vehicle(make, model, year, mileage), maxLoadCapacity(maxLoadCapacity) {}

    void displayInfo() const override {
        Vehicle::displayInfo();
        cout << ", Max Load Capacity: " << maxLoadCapacity << " tons";
    }
};

// Fleet Class
class Fleet {
    vector<shared_ptr<Vehicle>> vehicles;

public:
    void addVehicle(const shared_ptr<Vehicle>& vehicle) {
        vehicles.push_back(vehicle);
    }

    void displayAllVehicles() const {
        for (const auto& vehicle : vehicles) {
            cout << *vehicle << endl;
        }
    }

    void findVehiclesByMake(const string& make) const {
        for (const auto& vehicle : vehicles) {
            if (vehicle->getMake() == make) {
                cout << *vehicle << endl;
            }
        }
    }

    void findVehiclesByYear(int year) const {
        for (const auto& vehicle : vehicles) {
            if (vehicle->getYear() == year) {
                cout << *vehicle << endl;
            }
        }
    }
};

int main() {
    Fleet fleet;

    auto car1 = make_shared<Car>("Toyota", "Corolla", 2020, 15000.0, "Sedan");
    auto car2 = make_shared<Car>("Honda", "Civic", 2019, 20000.0, "Hatchback");
    auto truck1 = make_shared<Truck>("Ford", "F-150", 2021, 10000.0, 5.0);

    fleet.addVehicle(car1);
    fleet.addVehicle(car2);
    fleet.addVehicle(truck1);

    cout << "All Vehicles in the Fleet:\n";
    fleet.displayAllVehicles();

    cout << "\nVehicles by Make (Toyota):\n";
    fleet.findVehiclesByMake("Toyota");

    cout << "\nVehicles by Year (2019):\n";
    fleet.findVehiclesByYear(2019);

    return 0;
}
