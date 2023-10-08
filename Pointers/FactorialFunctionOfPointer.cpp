// Write a program to find the factorial of a number using pointers.
#include<iostream>
using namespace std;

int factorial(int* p){
    // if (*p == 0 || *p==1){
    //     return 1;
    // }
    // else
    // int n1 = *p; 
    // return factorial(n1) * factorial(n1-1);

    // Or
    int long sum=0;
    for (int i=1; i<*p; i++){
        sum = *p * (*p-1);
    }
    return sum;
}
int main(){
    int num;
    cout<<"Enter Number to find factorial: ";
    cin>>num;

    int long sum = factorial(&num);
    cout<<"Factorial of "<<num<<" is :"<<sum;

    return 0;
}