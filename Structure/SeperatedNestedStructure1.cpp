#include<iostream>
using namespace std;

struct Employee{
    int id;
    double salary;
};
struct organization{
    string name;
    Employee emp;
};

// int main(){
//     organization org;

//     cout<<"Enter ID: ";
//     cin>>org.emp.id;

//     cout<<"Enter Name: ";
//     cin>>org.name;

//     cout<<"Enter Salary: ";
//     cin>>org.emp.salary;

//     cout<<"ID: "<<org.emp.id<<endl;
//     cout<<"Name: "<<org.name<<endl;
//     cout<<"Salary: "<<org.emp.salary<<endl;
//     return 0;
// }


organization fetch(organization org){
    org.emp.id = 1234;
    org.name= "Nabeeha";
    org.emp.salary = 2346;
    return org;
}

int main(){
    organization org;

    org = fetch(org);

    cout<<"ID: "<<org.emp.id<<endl;
    cout<<"Name: "<<org.name<<endl;
    cout<<"Salary: "<<org.emp.salary<<endl;
    return 0;
}