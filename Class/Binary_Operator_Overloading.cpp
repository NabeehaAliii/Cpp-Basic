// Here's a summary of the notations for the expression "2 + 3 * 4" in each notation:

// Prefix notation: + 2 * 3 4
// Infix notation: 2 + 3 * 4
// Postfix notation: 2 3 4 * +

#include<iostream>
using namespace std;

class A{
    private:
    int i;
    public:
    A(int x){
        i=x;
    }

    void display(){
        cout<<"Value of a ="<<i<<endl;
    }

    // // Addition
    // A operator +(A d){                                            //// Argument >> 3
    //     A e(0);            
    //     e.i = i + d.i;                                            //// 0 >>8 = 5 +3;
    //     return e;
    // }


    // // Multiplication
    // A operator *(const A& d){
    //      A e(0);
    //     e.i = i * d.i;
    //     return e;     
    // }


    // // Substraction
    // A operator -(const A& s){
    //     A e(0);
    //     e.i = i - s.i;
    //     return e;
    // }


    // // Division
    A operator /(const A& s){
        A e(0);
        e.i = i / s.i;
        return e;
    }
    
};


int main(){
    A a(5);
    A b(3);
    A c(0);

    // c = a+b;                                             // a is the calling operand and b is the Argument.
    // c = a*b;                                    
    // c = a-b;                                    
    c = a/b;                                    
    c.display();

    return 0;
}