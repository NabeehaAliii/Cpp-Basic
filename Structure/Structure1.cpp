#include<iostream>
using namespace std;

struct student
{
    string name;
    int age;
    char section;
};

// int main(){
//     student std;
//     std.name="Nabeeha";
//     std.section='A';
//     std.age=18;

    // cout<<"NAME: "<<std.name<<endl;
    // cout<<"Age: "<<std.age<<endl;
    // cout<<"Section: "<<std.section<<endl;
//     return 0;
// }
  
// OR

// int main(){
//     student std;
//     // string name;
//     // int age;
//     // char section;

//     cout<<"Enter Name: "<<endl;
//     cin>>std.name;
//     cout<<"Enter Age: "<<endl;
//     cin>>std.age;
//     cout<<"Enter Section: "<<endl;
//     cin>>std.section;

//     // std.name = name;
//     // std.age= age;
//     // std.section = section;

    
//     cout<<"NAME: "<<std.name<<endl;
//     cout<<"Age: "<<std.age<<endl;
//     cout<<"Section: "<<std.section<<endl;

//     return 0;
// }

int main(){
    student std ={"Nabeeha", 18, 'A'};
    cout<<"NAME: "<<std.name<<endl;
    cout<<"Age: "<<std.age<<endl;
    cout<<"Section: "<<std.section<<endl;
    return 0;
}