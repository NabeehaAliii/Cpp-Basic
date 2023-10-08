#include<iostream>
using namespace std;

struct person{
    string name;
    int age;
};

// Note! We can use structure as return Type

person getdata(person);
void display(person);

int main(){
    person p1,p2;
    p1 = getdata(p2);
    display(p1);
    return 0;
}

person getdata(person p){
    string name;
    int age;

    cout<<"Name: ";
    cin>> name;

    cout<<"Age: ";
    cin>>age;

    p.name=name;
    p.age=age;

    return p;
}

void display(person p){
    cout<<"\t Person "<<endl;
    cout<<"NAME: "<<p.name<<endl;
    cout<<"AGE: "<<p.age<<endl;
}