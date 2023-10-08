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

};
int main()
{
    // Class Object = Constructor(Varibles/data)
    Employee employee1 = Employee("Nabeeha", "Software House", 8, "alinabeeha44@gmial.com"); // employee1 : is_object
    // employee1.introduceYourSelf();

    Employee employee2 = Employee("Saad", "Cricket Academy", 53, "alisaad99@gmail.com"); // employee2 : is_object
    // employee2.introduceYourSelf();

    employee1.AskForPromotion();
    employee2.AskForPromotion();

    

    return 0;
}

// 1.
// Through the process of abstraction, a programmer hides all but the relevant data about an object in order to reduce complexity and increase efficiency.

// 2.
// This is a C++ program that implements a class called Employee derived from an abstract class AbstractEmployee. The Employee class has data members (name, company, age, and email) and member functions (getters and setters for data members, a constructor, and introduceYourself). The class also implements the pure virtual function AskForPromotion which prints "Got promoted" if the employee's age is greater than 30, otherwise it prints "not promoted". Two objects of the Employee class are created and their data is set through the constructor. The AskForPromotion function is called for both objects.

// 3.
// Abstraction in object-oriented programming refers to hiding the implementation details and showing only the necessary information to the user.

// In this program, the abstract class AbstractEmployee provides the basic structure for creating an employee class and the AskForPromotion method is a pure virtual function. This means that the AbstractEmployee class cannot be instantiated and only serves as a blueprint for other classes to inherit from. The implementation of the AskForPromotion method is left to the derived class Employee. This way, the user of the Employee class only needs to know that it has a method called AskForPromotion which they can call, without having to know the details of how it works.

// By doing this, the user is only concerned with what the class can do and not how it does it, which provides a clear separation of concerns and makes the code easier to maintain and understand.