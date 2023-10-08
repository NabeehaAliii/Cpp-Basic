// Write a program to reverse the digits a number using pointers.
#include<iostream>
#include<math.h>
using namespace std;

int reverse(int *p){
    int r,rev=0;
    while (*p>0){
        r = *p%10;
        rev = rev *10 +r;
        *p = *p/10;
    }
    return rev;

}


int main(){
    int n;
    cout<<"Enter a Number: ";
    cin>> n;
    int num = n;
    int rev = reverse(&n);
    cout<<"The Reverse Number of "<<num<<" is "<<rev<<endl;
    return 0;
}

