#include<iostream>
using namespace std;

// class Base {
//   private:
//     int privateVar;

//   public:
//     int publicVar;
//     void publicFunc() {
//       cout << "This is a public function in the Base class." << endl;
//     }
// };

// class Derived : private Base {
//   public:
//     void derivedFunc() {
//     //privateVar = 10; // Error: Cannot access private member of Base class
//       publicVar = 20; // Accessing public member of Base class as private member of Derived class
//       publicFunc(); // Accessing public function of Base class as private function of Derived class
//     }

//     // to get them access through d we have to use getters and setter
//     void set_var(int var){
//         publicVar = var;
//     }

//     int get_var(){
//         return publicVar;
//     }

// };

 
// int main() {
//   Derived d;
//   d.derivedFunc(); // Calling derived function that accesses Base class members
// //   d.publicFunc();
// //   d.publicVar = 20;
//   // They are Now the provate members of the child class. So they can't be access uding d.
 
  
//   cout<<"\nAccess Now Private Members of Child Class with setters and getters.\n"<<endl;

//   d.set_var(3);
//   cout<<"Variable Using Get Function: "<<d.get_var();
  
  
//   cout<<"\n\t\tBase Class\n"<<endl;

//  Base b;
//  b.publicFunc();
//  b.publicVar = 30;
//  cout<<"Public VAriable : "<<b.publicVar<<endl;
 
//   return 0;
// }

// // can call private function using friend



// Scope operator
class Base {
  private:
    int x; // private data member
  public:
    void foo() {
      x = 10; // can access private data member within the class
    }
    
};

class Derived : private Base {
  public:
    void bar() {
      foo(); // can call Base class public member function
    //  Base::x = 5; // can access Base class private data member through scope resolution operator
    }
};


int main(){

  Derived d;
  d.bar(); // calls Derived class public member function bar(), which calls Base class public member function foo(), which can access Base class private data member x
  return 0;
}
  
