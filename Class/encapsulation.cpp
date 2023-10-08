// Encapsulation: made a class of student in which you gather their data.
#include<iostream>
using namespace std;

class student{
    private:
    string name, f_name, degree;
    int age, batch;

    public:
    void data(){
        cout<<"Enter your name: "<<endl;
        cin>> name;
        cout<<"Enter your Father name: "<<endl;
        cin>> f_name;
        cout<<"Enter your Degree: "<<endl;
        cin>> degree;
        cout<<"Enter your age: "<<endl;
        cin>> age;
        cout<<"Enter your batch: "<<endl;
        cin>> batch;

        cout<<"Name: "<<name<<endl;
        cout<<"Father Name: "<<f_name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Degree: "<<degree<<endl;
        cout<<"Batch: "<<batch<<endl;
    }
};

int main(){
    student std;

    std.data();

    return 0;
}