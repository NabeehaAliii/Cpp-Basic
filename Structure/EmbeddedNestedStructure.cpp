// 1st Example
#include<iostream>
using namespace std;

struct marks{
    string name;
    struct percent{
    int chem_marks;
    }p;
    // percent p;
};

int main(){
    marks std1;

    cout<<"Enter Name: "<<endl;
    cin>> std1.name;

    cout<<"Enter Marks of Chemistry of "<<std1.name<<" :"<<endl;
    cin>>std1.p.chem_marks;

    cout<<"NAME: "<<std1.name<<endl;
    cout<<"CHEMISTRY MARKS: "<<std1.p.chem_marks<<endl;

    return 0;
}


// 2nd Example

// #include <iostream>
// using namespace std;

// // Define a structure for a date
// struct Date {
//     int day;
//     int month;
//     int year;
// };

// // Define a structure for a person
// struct Person {
//     string name;
//     Date birthdate;        // Obj of Date
//     int age;
// };

// int main() {
//     // Declare a person
//     Person p;

//     // Set values for the person's name, birthdate, and age
//     p.name = "John";
//     p.birthdate.day = 1;
//     p.birthdate.month = 1;
//     p.birthdate.year = 2000;
//     p.age = 22;

//     // Print out the person's name, birthdate, and age
//     cout << "Name: " << p.name << endl;
//     cout << "Birthdate: " << p.birthdate.day << "/" << p.birthdate.month << "/" << p.birthdate.year << endl;
//     cout << "Age: " << p.age << endl;

//     return 0;
// }
