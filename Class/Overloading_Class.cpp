// #include<iostream>
// using namespace std;


// class A{
//     private:
//     int a;

//     protected:
//     int b;

//     public:
//     int c;


//     // For Private Setter and Getters in Main
//     void set_a(int aaa){
//         a = aaa;
//     }

//     int get_a(){
//         return a;
//     }
// };

// // Child Class
// class B: public A{
//     // a== Private : Use getters and setters in main
//     // b== Protected : Use getters and setters in Class B
//     // c== Public

//     public:
//     void set_b(int bbb){
//         b = bbb;
//     }

//     int get_b(){
//         return b;
//     }
// };

// class C: protected A{
//     // a== Priavte:
//     // b and c are Protected: Will use getters nd setters here;
//     ///// This is the preffered medium

//     public:
//     void set_b(int bbb){
//         b = bbb;
//     }

//     int get_b(){
//         return b;
//     }

//     // For C
//     void set_c(int ccc){
//         c = ccc;
//     }

//     int get_c(){
//         return c;
//     }
// };


// class D: private A{
//     // a== Priavte:
//     // b and c are Priavte: Will use getters and setters here;

//     public:
//     void set_b(int bbb){
//         b = bbb;
//     }

//     int get_b(){
//         return b;
//     }

//     // For C
//     void set_c(int ccc){
//         c = ccc;
//     }

//     int get_c(){
//         return c;
//     }
// };


// int  main(){
//     A a;
//     a.set_a(5);
//     int Value_a = a.get_a();
//     cout<<"Value of a: "<<Value_a<<endl;
//     a.c = 10;
//     cout<<"Value of c: "<<a.c<<endl;

//     B b;
//     b.set_a(10);
//     int Value_a = b.get_a();
//     cout<<"Value of a: "<<Value_a<<endl;  
//     b.set_b(15);
//     int Value_b = b.get_b();
//     cout<<"Value of b: "<<Value_b<<endl;


//     C c;
//     // c.set_a(100);
//     // // a , b, and c all have getters
//     // int Value_a3 = c.get_a();
//     // // cout<<"Value of a: "<<Value_a3<<endl;  

//     c.set_b(150);
//     int Value_b3 = c.get_b();
//     cout<<"Value of b: "<<Value_b3<<endl;
//     c.set_c(1000);
//     int Value_c3 = c.get_c();
//     cout<<"Value of c: "<<Value_c3<<endl;


//     D d;
//     // d.set_a(100);
//     // a , b, and c all have getters
//     // int Value_a4 = d.get_a();
//     // cout<<"Value of a: "<<Value_a4<<endl;  
//     d.set_b(150);
//     int Value_b4 = d.get_b();
//     cout<<"Value of b: "<<Value_b4<<endl;
//     d.set_c(1000);
//     int Value_c4 = d.get_c();
//     cout<<"Value of c: "<<Value_c4<<endl;
//     return 0;
// }


// ORRRRR


#include <iostream>
using namespace std;

class Parent {
public:
    int publicMember;
protected:
    int protectedMember;
private:
    int privateMember;
public:
    void setPrivateMember(int value) {
        privateMember = value;
    }
    int getPrivateMember() {
        return privateMember;
    }

public:
    void publicFunction() {
        cout << "This is the public function of Parent class" << endl;
    }
protected:
    void protectedFunction() {
        cout << "This is the protected function of Parent class" << endl;
    }
private:
    void privateFunction() {
        cout << "This is the private function of Parent class" << endl;
    }
};

class ChildPublic : public Parent {
public:
    void accessParentMembers() {
        publicMember = 1;
        protectedMember = 2;
        setPrivateMember(3);
        cout << "publicMember = " << publicMember << endl;
        cout << "protectedMember = " << protectedMember << endl;
        cout << "privateMember = " << getPrivateMember() << endl;
        publicFunction();
        protectedFunction();
    }
};

class ChildProtected : protected Parent {
public:
    void accessParentMembers() {
        publicMember = 1;
        protectedMember = 2;
        setPrivateMember(3);
        cout << "publicMember = " << publicMember << endl;
        cout << "protectedMember = " << protectedMember << endl;
        cout << "privateMember = " << getPrivateMember() << endl;
        publicFunction();
        protectedFunction();
        
    }
};

class ChildPrivate : private Parent {
public:
    void accessParentMembers() {
        publicMember = 1;
        protectedMember = 2;
        setPrivateMember(3);
        cout << "publicMember = " << publicMember << endl;
        cout << "protectedMember = " << protectedMember << endl;
        cout << "privateMember = " << getPrivateMember() << endl;
        publicFunction();
        protectedFunction();
    }
};

int main() {
    ChildPublic objPublic;
    objPublic.accessParentMembers();

    cout<<"\n\n"<<endl;
    ChildProtected objProtected;
    objProtected.accessParentMembers(); // Can't access members since they are protected
    cout<<"\n\n"<<endl;

    ChildPrivate objPrivate;
    objPrivate.accessParentMembers(); // Can't access members since they are private

    return 0;
}


