// Constructor:
// 1. It is used to initialized the value, if we make constructor we don't need getter and setter for the purpose of initialization.
// 2. We dont have to call the default constructor as they are active when we make an object of class in the main.
// 3 Its name is same as the Class name

#include<iostream>
using namespace std;

class data{
    private:
    int age;

    public:
    data(){
        age =30;
    }
};

int main(){
    data d;

    return 0;
}
