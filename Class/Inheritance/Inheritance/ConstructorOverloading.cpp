#include<iostream>
using namespace std;

class Base1 {
  public:
    void func() {
      std::cout << "Hello from Base1!" << std::endl;
    }
};

class Base2 {
  public:
    void func() {
      std::cout << "Hello from Base2!" << std::endl;
    }
};

class Derived : public Base1, public Base2 {
  public:
    void func() {
      Base1::func(); // calls Base1 function func()
      Base2::func(); // calls Base2 function func()
      std::cout << "Hello from Derived!" << std::endl;
    }
};

int main() {
  Derived obj;

  obj.func(); // calls Derived function func(), which calls both Base1 and Base2 functions
//   Base1::func();
//   Base2::func();
//After that, two more func() functions are called outside of the Derived class scope using the scope resolution operator. These calls are invalid because func() is not a static function, it's a member function. The correct way to call a member function is to create an object of the class and call the function using the object.

  cout<<endl;
  Base1 obj1;
  obj1.func(); // calls Base1 function func() using an object of Base1
  cout<<endl;
  Base2 obj2;
  obj2.func(); // calls Base2 function func() using an object of Base2
  return 0;
}
