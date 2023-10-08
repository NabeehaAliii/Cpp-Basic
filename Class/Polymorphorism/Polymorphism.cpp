#include <iostream>

using namespace std;
// Abstaract Class
class AbstractEmployee{
    // Obligatorty Method, Pure Virtual Function, Abstract Function
    virtual void AskForPromotion()=0;              
};

class Employee:AbstractEmployee
{
private: // Can't be access drectly, now we need methods to make them access
    string name;
    string company;
    int age;
    string email;
// protected:
//     string name;
public:
    // MAke getter and setter methods
    void setName(string namee)   //setter
    {
        name = namee;
    }
    string getName()            //getter
    {
        return name;
    }
    void setCompany(string Company)
    {
        company = Company;
    }
    string getCompany()
    {
        return company;
    }
    // Validation/ Check
    void setAge(int agee)
    {
        if(agee>=18)
        age = agee;
    }
    int getAge()
    {
        return age;
    }
    void setemail(string emaill)
    {
        email = emaill;
    }
    string getemail()
    {
        return email;
    }
    void introduceYourSelf()
    { // Class Method
        cout << "Name: " << name << endl;
        cout << "Company: " << company << endl;
        cout << "Age: " << age << endl;
        cout << "Email: " << email << endl;
    }

    // public:
    Employee(string naam, string companyy, int Age, string Email) // Employee: Constructor: Constructing the object based on the parameter we passed
    {
        name = naam;
        company = companyy;
        age = Age;
        email = Email;
    }

    void AskForPromotion(){
        if (age>30)
        cout<<name<< " Got Promoted"<<endl;
        else
        cout<<name<<" Sorry, Not Promoted"<<endl;
    }

    virtual void Work(){                            // A virtual function in C++ is a member function that can be redefined in a derived class, while preserving its calling properties through references or pointers to the base class. It is declared in the base class using the keyword "virtual" and is implemented in each derived class. When a virtual function is called through a reference or pointer to the base class, the correct implementation of the function is called based on the actual type of the object, rather than the declared type of the reference or pointer.
        cout<<getName()<<" is checking Email, performing Task.."<<endl;
    }

};

//Inheritance
// After becoming the child of Employee Now the developer class has Every method of Employee Class
// child: Base/Parent/Super Class
class Developer: public Employee{
    public:
    // Properties that developer has but Employee doesn't
    string favProgrammingLAnguage;
//Constructor for Developer: Becuz First you hav default constructor but when you made constructor for class then you lose the chance of getting default.

// MAy be in your mind there is a question taht we haven't made constructor for Developer why we have lose the default the answer to this questtion is that developer is the child class to Employee which has the constructor.
Developer(string naam, string companyy, int Age, string Email, string FavProgrammingLAnguage):Employee(naam,companyy,Age,Email){
// Now The fisrt four methods will be carried by the parent class we dont need to define them here also, we will only take care of the properties of Developer
          favProgrammingLAnguage = FavProgrammingLAnguage;
}
  void FixBug(){
    cout<<getName()<< " Fixed Bug Using "<< favProgrammingLAnguage<<endl;
    // cout<<name<< " Fixed Bug Using "<< favProgrammingLAnguage<<endl;
    // can directly access name when we used protected Access Modifier instead of Private  
    }
     void Work(){
        cout<<getName()<<" is writing "<<favProgrammingLAnguage<<endl;
    }
};

class Teacher: public Employee{
public:
    string subject;
    void prepareLesson(){
        cout<<"Miss "<<getName()<<" is preparing for "<<subject<<" lesson."<<endl;
    }
    // Constructor for Teacher Class
    Teacher(string naam, string companyy, int Age, string Email,string Subject):Employee(naam,companyy,Age,Email)
    {
        subject= Subject;
    }
     void Work(){
        cout<<getName()<<" is Teaching "<<subject<<endl;
    }

};


int main()
{
    // Employee emp("Ben", "House", 58, "alinabeeha44@gmial.com", "Python");
    // emp.Work();                      // Doesnt Work, Dont know why...

    // // Class Object = Constructor(Varibles/data)
    // Developer d = Developer("Saad", "Software House", 18, "alinabeeha44@gmial.com", "Python");
    // d.FixBug();    
    // d.AskForPromotion();         // MAke the inheritance (Employee) Public, THen you will get this method from employee
    // d.Work();                    // If you dont define sepearte forms of method then wrok will only inherit from the employee

    // Teacher t= Teacher("Nabeeha", "Software House", 38, "alinabeeha44@gmial.com","PF");
    // t.prepareLesson();
    // t.AskForPromotion();
    // t.Work();                  // If you dont define sepearte forms of method then wrok will only inherit from the employee



//                        <<<<<<THIS IS DIFFERENT>>>>



    //Important!
    // The Most commom use of polymorphism is when a parent class reference is used to refer to a child class object.

    Developer d = Developer("Saad", "Software House", 18, "alisaad44@gmial.com", "Python");
    Teacher t("Nabeeha", "Software House", 38, "alinabeeha44@gmial.com","PF");

    Employee* e1 =&d;    
    Employee* e2 =&t;

    // -> : Access Members using Pointers

    // e1->Work();    
    // e2->Work();  
    // Output  
    // Saad is checking Email, performing Task..
    // Nabeeha is checking Email, performing Task..

    // Make the Work method of Employee virtual
    e1->Work();    
    e2->Work();  
    // Output
    // Saad is writing Python
    // Nabeeha is Teaching PF
    return 0;
}













// Polymorphism in C++ is a feature of object-oriented programming that allows objects of different classes to be treated as objects of a common class. It enables a single function or operator to perform differently based on the type of object it is applied to. There are two main forms of polymorphism in C++: runtime polymorphism (also known as dynamic polymorphism) and compile-time polymorphism (also known as static polymorphism).

// Runtime polymorphism is achieved through the use of virtual functions and can be implemented by creating a base class with a virtual function, and then creating derived classes that each provide their own implementation of that virtual function. When an object of a derived class is used through a pointer or reference to the base class, the correct implementation of the virtual function is automatically called at runtime based on the actual type of the object.

// Compile-time polymorphism, on the other hand, is achieved through function overloading, operator overloading, and template functions. These features allow you to define multiple functions or operators with the same name, but with different parameter lists. The appropriate function or operator is selected at compile time based on the types of arguments passed to it.