#include <iostream>
using namespace std;

class Shape {
public:
    virtual void display() {
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void display() override {
        cout << "This is a circle." << endl;
    }
};

class Triangle : public Shape {
public:
    void display() override {
        cout << "This is a triangle." << endl;
    }
};

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Triangle();

    shape1->display();   // Calls Circle's display() function
    shape2->display();   // Calls Triangle's display() function

    delete shape1;
    delete shape2;

    return 0;
}
