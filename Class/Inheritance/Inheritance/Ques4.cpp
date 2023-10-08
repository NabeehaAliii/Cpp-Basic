// We want to store the information of different vehicles. Create a class named Vehicle with two data member named mileage and price. Create its two subclasses
// *Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type (diesel or petrol).
// *Bike with data members to store the number of cylinders, number of gears, cooling type(air, liquid or oil), wheel type(alloys or spokes) and fuel tank size(in inches).
// Make another two subclasses Audi and Ford of Car, each having a data member to store the model type. Next, make two subclasses Bajaj and TVS, each having a data member to store the make-type.
// Now, store and print the information of an Audi and a Ford car (i.e. model type, ownership cost, warranty, seating capacity, fuel type, mileage and price.) Do the same for a Bajaj and a TVS bike.

#include <iostream>
using namespace std;

class Vehicle {
protected:
    double mileage, price;
    
public:
    Vehicle(double _mileage, double _price) {
        mileage = _mileage;
        price = _price;
    }
};

class Car : public Vehicle {
protected:
    double ownership_cost, warranty;
    int seating_capacity;
    string fuel_type;
    
public:
    Car(double _mileage, double _price, double _ownership_cost, double _warranty, int _seating_capacity, string _fuel_type)
        : Vehicle(_mileage, _price) {
        ownership_cost = _ownership_cost;
        warranty = _warranty;
        seating_capacity = _seating_capacity;
        fuel_type = _fuel_type;
    }
};

class Bike : public Vehicle {
protected:
    int num_cylinders, num_gears;
    string cooling_type, wheel_type;
    double fuel_tank_size;
    
public:
    Bike(double _mileage, double _price, int _num_cylinders, int _num_gears, string _cooling_type, string _wheel_type, double _fuel_tank_size)
        : Vehicle(_mileage, _price) {
        num_cylinders = _num_cylinders;
        num_gears = _num_gears;
        cooling_type = _cooling_type;
        wheel_type = _wheel_type;
        fuel_tank_size = _fuel_tank_size;
    }
};

class Audi : public Car {
private:
    string model_type;
    
public:
    Audi(double _mileage, double _price, double _ownership_cost, double _warranty, int _seating_capacity, string _fuel_type, string _model_type)
        : Car(_mileage, _price, _ownership_cost, _warranty, _seating_capacity, _fuel_type) {
        model_type = _model_type;
    }
    
    
    void print_info() {
        cout << "Audi " << model_type << " car information:\n";
        cout << "Ownership cost: " << ownership_cost << endl;
        cout << "Warranty: " << warranty << " years" << endl;
        cout << "Seating capacity: " << seating_capacity << endl;
        cout << "Fuel type: " << fuel_type << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

class Ford : public Car {
private:
    string model_type;
    
public:
    Ford(double _mileage, double _price, double _ownership_cost, double _warranty, int _seating_capacity, string _fuel_type, string _model_type)
        : Car(_mileage, _price, _ownership_cost, _warranty, _seating_capacity, _fuel_type) {
        model_type = _model_type;
    }
    
    void print_info() {
        cout << "Ford " << model_type << " car information:\n";
        cout << "Ownership cost: " << ownership_cost << endl;
        cout << "Warranty: " << warranty << " years" << endl;
        cout << "Seating capacity: " << seating_capacity << endl;
        cout << "Fuel type: " << fuel_type << endl;
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

class Bajaj : public Bike {
private:
    string make_type;
    
public:
    Bajaj(double _mileage, double _price, int _num_cylinders, int _num_gears, string _cooling_type, string _wheel_type, double _fuel_tank_size)