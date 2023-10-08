#include<iostream>
using namespace std;

class Base {
protected:
    int protectedData;
};

class Derived : protected Base {
public:

    void setProtectedData(int value) {
        protectedData = value;  // Accessible within the derived class
    }
    
    int getProtectedData() {
        return protectedData;  // Accessible within the derived class
    }
};

int main() {
    Derived derivedObj;
    derivedObj.setProtectedData(10);
    cout << derivedObj.getProtectedData();  // Output: 10

    return 0;
}
