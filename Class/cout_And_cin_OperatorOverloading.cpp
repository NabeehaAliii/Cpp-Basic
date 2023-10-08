#include <iostream>
using namespace std;

class MyClass {
private:
    int value;
    int a,b;

public:
    MyClass(){}
    MyClass(int val) : value(val) {}
    MyClass(int a,int b): a(a), b(b){}

    // friend ostream& operator <<(ostream& os, const MyClass& obj) {
    //     os << "Value: " << obj.value;
    //     return os;
    // }

    // friend istream& operator >>(istream& is, MyClass& obj) {
    //     cout << "Enter a value: ";
    //     is >> obj.value;
    //     return is;
    // }

    friend istream& operator>>(istream& in, MyClass& obj){
        cout<<"Enter a: ";
        in>>obj.a;

        cout<<"Enter b: ";
        in>>obj.b;

        // return in;
    }

    friend ostream& operator<<(ostream& out, const MyClass& obj) {
        out << "a: " << obj.a<<endl;
        out << "b: " << obj.b<<endl;
        // return out;
    }
};

int main() {
    MyClass obj(0);

    // Input using cin
    cin >> obj;
    // Output using cout
    cout << obj << endl;


    // MyClass A(5,3);
    MyClass b;

    cin>>b;
    cout<<b;

    return 0;
}
