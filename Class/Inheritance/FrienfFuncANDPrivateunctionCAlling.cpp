#include<iostream>
using namespace std;


// If you need to access a private member function from outside the class, you can make it a public member function, or create a public member function that calls the private member function. Alternatively, you can declare the function as a friend function of the class, which grants it access to the private members of the class.

class MyClass {
  private:
    void foo() {
      std::cout << "Hello from private function foo!" << std::endl;
    }
  public:
    void bar() {
      foo(); // can call private member function from public member function
    }
    friend void friendFunc(MyClass& obj); // declare friend function
};

void friendFunc(MyClass& obj) {
  obj.foo(); // can access private member function as friend function
}

int main() {

  MyClass obj;
  cout<<"\t\t Calling using public function\n"<<endl;
  obj.bar(); // calls public member function bar(), which calls private member function foo()
  cout<<"\t\t Calling using Friend function\n"<<endl;
  friendFunc(obj); // calls friend function, which can access private member function foo()


  MyClass::bar;            // Scope operator


  MyClass* p = &obj;        // pointer scope
  p->bar();

  
  return 0;
}
