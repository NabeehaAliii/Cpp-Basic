

// #include <iostream>
// #include <string.h>

// using namespace std;

// class student {
// public:
//     char name[40];
//     char add[30];
//     int roll_no, postal_code;

//     // Constructor
//     student(char n[40], char a[30], int r_n, int p_c) : roll_no(r_n), postal_code(p_c) {
//         strcpy(name, n);        // char* strcpy(char* destination, const char* source);
//         strcpy(add, a);
//     }

//     // Default constructor
//     student() : roll_no(0), postal_code(0) {}

//     void getdata(student &p) {
//         cout << "Enter Name: " << endl;
//         cin.getline(p.name, 40);

//         cout << "Enter Address: " << endl;
//         cin.getline(p.add, 30);

//         cout << "Enter Roll Number: " << endl;
//         cin >> p.roll_no;

//         cout << "Enter Postal Code: " << endl;
//         cin >> p.postal_code;
//     }

    
//     void display(student& p) {
//         cout << "Name: " << p.name << endl;
//         cout << "Address: " << p.add << endl;
//         cout << "Roll Number: " << p.add << endl;
//         cout << "Postal Code: " << p.postal_code << endl;
//     }

// };

// int main() {
//     student p,p1;
//     p.getdata(p);
//     p.display(p);


//     p1.getdata(p1);
//     p1.display(p1);


//     // cout<<"Name: "<<p.name<<endl;
//     // cout<<"Name: "<<p.add<<endl;
//     // cout<<"Roll Number: "<<p.roll_no<<endl;
//     // cout<<"Roll Number: "<<p.postal_code<<endl;

//     // p.name can not be accessed directly as they are pivate members, so they need geetes to get the value
//     return 0;
// }