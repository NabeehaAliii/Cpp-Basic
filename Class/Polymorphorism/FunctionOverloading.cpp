#include <iostream>
using namespace std;

// Function overloading
int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    int sum1 = add(2, 3);           // Calls the int add(int, int) function
    float sum2 = add(2.5f, 3.7f);   // Calls the float add(float, float) function

    cout << "Sum 1: " << sum1 << endl;
    cout << "Sum 2: " << sum2 << endl;

    return 0;
}
