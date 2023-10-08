#include <iostream>
using namespace std;

class Vector {
private:
    int x, y;

public:
    Vector(int xVal, int yVal) : x(xVal), y(yVal) {}

    Vector operator+(const Vector& other) {
        return Vector(x + other.x, y + other.y);
    }

    void display() {
        cout << "Vector: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector v1(2, 3);
    Vector v2(4, 5);
    Vector v3 = v1 + v2;

    v1.display();
    v2.display();
    v3.display();

    return 0;
}
