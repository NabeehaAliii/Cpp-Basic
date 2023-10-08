// #include<iostream>
// using namespace std;

// class Base{
//     private:
//     int a;
//     public:
//     Base(int x){ a= x; }
//     void operator ++(){            // Preincrement
//         a = a+1;
//     }

//     void operator ++(int){            // Postincrement
//         cout<<"Before: a = "<< a<<endl;
//         a = a+1;
//         cout<<"After: a = "<< a<<endl;

//     }

//     void display(){
//         cout<<"The Value of a: "<<a<<endl;
//     }
// };


// int main(){
//     Base b(5);
//     ++b;         // Prefix
//     b.display();
//     b++;         // Postfix
//     b.display();

//     return 0;
// }


#include <iostream>

class MyClass {
public:
    int value;

    MyClass(int val) : value(val) {}

    MyClass& operator++() {  // Prefix increment operator overloading
        value++;
        return *this;
    }

    MyClass operator++(int) {  // Postfix increment operator overloading
        MyClass temp(*this);
        value++;
        return temp;
    }
};



int main() {
    MyClass obj(8);
    // Chnage the Order of Prefix and post fix

    // Prefix increment
    MyClass preObj = ++obj;
    std::cout << "Prefix Increment: " << preObj.value << std::endl;   // Output: 6
    std::cout << "Updated Value: " << obj.value << std::endl;          // Output: 6

    // Postfix increment
    MyClass postObj = obj++;
    std::cout << "Postfix Increment: " << postObj.value << std::endl;  // Output: 6
    std::cout << "Updated Value: " << obj.value << std::endl;          // Output: 7



    // Here

    // // Postfix increment
    // MyClass postObj = obj++;
    // std::cout << "Postfix Increment: " << postObj.value << std::endl;  // Output: 5
    // std::cout << "Updated Value: " << obj.value << std::endl;          // Output: 6


    // // Prefix increment
    // MyClass preObj = ++obj;
    // std::cout << "Prefix Increment: " << preObj.value << std::endl;   // Output: 7
    // std::cout << "Updated Value: " << obj.value << std::endl;          // Output: 7
   
    return 0;
}