// #include<iostream>
// #include<string.h>

// using namespace std;

// class student{
//     private:
//     char name[20];
//     char add[30];
//     int roll_no, postal_code;
    
//     public:
//     student(char n[20], char add[30], int r_n, int p_c):roll_no(r_n), postal_code(p_c){
//         strcpy(name, n);
//         strcpy(add, add);
//     }

//     void getdata(){
//         cout<<"Enter Name: "<<endl;
//         cin.getline(name,20);

//         cout<<"Enter Address: "<<endl;
//         cin.getline(add,30);

//         cout<<"Enter Roll Number: "<<endl;
//         cin>>roll_no;

//         cout<<"Enter postal Code: "<<endl;
//         cin>>postal_code;
//     }

//     void display(){
//         cout<<"Name: "<<name[20]<<endl;
//         cout<<"Address: "<<add[30]<<endl;
//         cout<<"Roll Number: "<<roll_no<<endl;
//         cout<<"Postal Code: "<<postal_code<<endl;
//     }

// };


// int main(){
//     student std(0,0, 0,0);
//     std.getdata();
//     std.display();
//     return 0;
// }

// Errors compare it with the given code.

// OR
            //    Correct Method
// #include <iostream>
// #include <string.h>

// using namespace std;

// class student {
// private:
//     char name[20];
//     char add[30];
//     int roll_no, postal_code;

// public:
//     // // Constructor
//     // student(char n[20], char a[30], int r_n, int p_c) : roll_no(r_n), postal_code(p_c) {
//     //     strcpy(name, n);
//     //     strcpy(add, a);
//     // }

//     // Default constructor
//     student() : roll_no(0), postal_code(0) {}

//     void getdata() {
//         cout << "Enter Name: " << endl;
//         cin.getline(name, 20);

//         cout << "Enter Address: " << endl;
//         cin.getline(add, 30);

//         cout << "Enter Roll Number: " << endl;
//         cin >> roll_no;

//         cout << "Enter Postal Code: " << endl;
//         cin >> postal_code;
//     }

//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Address: " << add << endl;
//         cout << "Roll Number: " << roll_no << endl;
//         cout << "Postal Code: " << postal_code << endl;
//     }
// };

// int main() {
//     student std;
//     std.getdata();
//     std.display();
//     return 0;
// }




// // OR
//                 //  correct 
// #include <iostream>
// #include <string.h>

// using namespace std;

// class student {
// private:
//     char name[20];
//     char add[30];
//     int roll_no, postal_code;

// public:
//     // // Constructor
//     // student(char n[20], char a[30], int r_n, int p_c) : roll_no(r_n), postal_code(p_c) {
//     //     strcpy(name, n);
//     //     strcpy(add, a);
//     // }

//     // Default constructor
//     student() : roll_no(0), postal_code(0) {}

//     void getdata(student &p) {
//         cout << "Enter Name: " << endl;
//         cin.getline(p.name, 20);

//         cout << "Enter Address: " << endl;
//         cin.getline(p.add, 30);

//         cout << "Enter Roll Number: " << endl;
//         cin >> p.roll_no;

//         cout << "Enter Postal Code: " << endl;
//         cin >> p.postal_code;
//     }

//     void display(student &p) {
//         cout << "Name: " << p.name << endl;
//         cout << "Address: " << p.add << endl;
//         cout << "Roll Number: " << p.roll_no << endl;
//         cout << "Postal Code: " << p.postal_code << endl;
//     }
// };

// int main() {
//     student p;
//     p.getdata(p);
//     p.display(p);

//     return 0;
// }
 

//  Or

// #include <iostream>
// #include <string.h>

// using namespace std;

// class student {
// private:
//     char name[20];
//     char add[30];
//     int roll_no, postal_code;

// public:
//     // // Constructor
//     // student(char n[20], char a[30], int r_n, int p_c) : roll_no(r_n), postal_code(p_c) {
//     //     strcpy(name, n);
//     //     strcpy(add, a);
//     // }

//     // Default constructor
//     student() : roll_no(0), postal_code(0) {}

//     void getdata(student &p) {
//         cout << "Enter Name: " << endl;
//         cin.getline(p.name, 20);

//         cout << "Enter Address: " << endl;
//         cin.getline(p.add, 30);

//         cout << "Enter Roll Number: " << endl;
//         cin >> p.roll_no;

//         cout << "Enter Postal Code: " << endl;
//         cin >> p.postal_code;
//     }
//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Address: " << add << endl;
//         cout << "Roll Number: " << roll_no << endl;
//         cout << "Postal Code: " << postal_code << endl;
//     }
//     char* get_name() { return name; }
//     char* get_address() { return add; }
//     int get_roll_no() { return roll_no; }
//     int get_postal_code() { return postal_code; }


// };

// int main() {
//     student p;
//     p.getdata(p);
//     // p.display();

//     cout<<"Name: "<<p.get_name()<<endl;
//     cout<<"Address: "<<p.get_address()<<endl;
//     cout<<"Roll Number: "<<p.get_roll_no()<<endl;
//     cout<<"Postal Code: "<<p.get_postal_code()<<endl;



//     // cout<<"Name: "<<p.name<<endl;
//     // cout<<"Roll Number: "<<p.roll_no<<endl;
//     // p.name can not be accessed directly as they are pivate members, so they need geetes to get the value
//     return 0;
// }



// // OR

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