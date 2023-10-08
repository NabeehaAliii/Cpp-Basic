#include<iostream>
using namespace std;

class data{
    private:
    int age;


    public:
    void setage(int b){
        age = b;
    }

    int getage(){
        return age;
    }
};

int main(){
    data d;
    d.setage(30);
    cout<<d.getage();

    return 0;
}

// Main Points:
// 1. Setters and Getters are Access Specifiers.
// 2. Setters and Getters are used for 2 purposes, 1st for initializing the value and 2nd, to set and get value of provate memebers.
// 3. Setters and getters depend upon the number of private data members, 2 data members need total of four setters and getters.
