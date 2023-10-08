// #include <iostream>
// using namespace std;

// struct Person {
//     string name;
//     int age;
// };

// int main() {
//     Person* p = new Person; // create a new Person object using a pointer
//     // p->name = "John"; // set the name field of the Person object
//     // p->age = 30; // set the age field of the Person object
//     // User input
//     cout<<"Enter Name: ";
//     cin>> p->name;
//     cout<<"Enter Age: ";
//     cin>> p->age;
//     cout << "Name: " << p->name << endl; // print the name field
//     cout << "Age: " << p->age << endl; // print the age field

//     delete p; // deallocate the memory used by the Person object

//     return 0;
// }


// OR

// #include <iostream>
// using namespace std;

// struct abc {
//     int x;
//     int y;
// };

// int main() {
//     struct abc a = {0,1};
//     struct abc *ptr = &a; // create a new Person object using a pointer

//     cout<<ptr->x <<"  "<< ptr->y;
//     // cout<<ptr.x <<"  "<< ptr.y;
//     return 0;
// }


// ptr is a pointer to some variable of type struct abc

// Chatgpt
#include <iostream>
using namespace std;

// Define a structure for a person
struct Person {
    string name;
    int age;
};

int main() {
    // Declare a pointer to a person
    Person* ptrPerson;

    // Allocate memory for a person using new
    ptrPerson = new Person;
    
    // Set values for the person's name and age using pointer notation
    // (*ptrPerson).name = "John";
    ptrPerson->name="John";
    ptrPerson->age = 25;

    // Print out the person's name and age using pointer notation

    // cout << "Name: " << (*ptrPerson).name << endl;
    cout << "Name: " << ptrPerson->name << endl;
    cout << "Age: " << ptrPerson->age << endl;

    // Deallocate memory for the person using delete
    delete ptrPerson;

    return 0;
}
