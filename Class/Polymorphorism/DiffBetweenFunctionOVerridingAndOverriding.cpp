#include <iostream>
using namespace std;

class Shape {
public:
    void display() {
        cout << "This is a shape." << endl;
    }
    virtual void print() {
        cout << "Print function in Shape class. ///Function Overriding" << endl;
    }
};

class Circle : public Shape {
public:
    void display() {
        cout << "This is a circle." << endl;
    }
    void print() override {
        cout << "Print function in Circle class.// /// Overridden" << endl;
    }
};

int main() {
    Shape* shape = new Circle();

    shape->display(); // Calls Shape's display() function
    shape->print();   // Calls Circle's print() function (virtual function)
    
    delete shape;

    return 0;
}
