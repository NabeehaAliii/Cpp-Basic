// Define a function to calculate power of a number raised to other i.e. ab using recursion where the numbers 'a' and 'b' are to be entered by the user.

#include<iostream>
using namespace std;

int func_power(int base, int power){
    if(power>0)
    return base*func_power(base,power-1);
    else
    return 1;
}
int main(){
    int base, power;
    int pow = func_power(3,4);
    cout<<"3^4 = "<<pow<<endl;
    return 0;
}