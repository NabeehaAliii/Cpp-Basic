// We can pass structure to any function
#include<iostream>
using namespace std;

struct student
{
    string name;
    int age;
    char section;
};

void display(student);              // Function Declaration
// void display(student&);              // Function Declaration
int main(){
    student std;
    string name;
    int age;
    char section;

    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter Section: ";
    cin>>section;

    std.name = name;
    std.age= age;
    std.section = section;

    display(std);

    return 0;
}

void display(student std){
// void display(student& std){
    cout<<"NAME: "<<std.name<<endl;
    cout<<"Age: "<<std.age<<endl;
    cout<<"Section: "<<std.section<<endl;
}

// Note! We can use structure as return Type
