//Object & Classess, Access Modifiers
#include<iostream>

using namespace std;
class Employee{
public:
    string name;
    string company;
    int age;
    string email;

    void introduceYourSelf(){                      // Class Method
        cout<<"Name: "<<name<<endl;
        cout<<"Company: "<<company<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Email: "<<email<<endl;
    }

};
int main(){

    // int num;
    Employee employee1;                  //employee1 : is_object
    employee1.name= "Nabeeha";
    employee1.company = "Software House";
    employee1.age = 18;
    employee1.email = "alinabeeha44@gmail.com";
    employee1.introduceYourSelf();


    Employee employee2;                 //employee1 : is_object
    employee2.name= "Saad";
    employee2.company= "Cricket Academy";
    employee2.age= 12;
    employee2.email= "alisaad99.gamil.com";
    employee2.introduceYourSelf();

    return 0;
}



// Access Modifiers
// In Private we can not access the members of the class
// 1. Everything is private by default.
// 2. Three types Private, Public and Protected.
// 3. Private: Only acceessible in your class.
// 4. Public: Available Every where in the program.
// 5. Protected: Somewhat between Private and Public. Follow some rules to be public.
