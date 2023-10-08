#include<iostream>
using namespace std;

int reversenum(int n){
    static int newnum = 0;
    if (n>0){
        int temp = n%10;
        newnum = (newnum*10) + temp;
        return reversenum(n/10);
    }
    else
    return newnum;

}

int main(){
    int n;
    cout<<"Enter a Number to be Reversed: "<<endl;
    cin>>n;

    int rev = reversenum(n);
    cout<<"Reverse Number: "<<rev<<endl;

    return 0;
}


// int reversenum(int n){
//     static int newnum = 0;
//     if (n>0){
//         int temp = n%10;
//         newnum = (newnum*10) + temp;
//         return reversenum(n/10);
//     }
//     else
//     return newnum;

// }

// reversenum(123) is called.

// newnum is initialized to 0.

// Since n is greater than 0, the function proceeds to the next step.

// The remainder of 123 when divided by 10 is 3.

// newnum is updated to 0*10 + 3 = 3.

// The function calls itself recursively with n/10 = 12 as input.

// The above steps are repeated with n=12.

// The remainder of 12 when divided by 10 is 2.

// newnum is updated to 3*10 + 2 = 32.

// The function calls itself recursively with n/10 = 1 as input.

// The above steps are repeated with n=1.

// The remainder of 1 when divided by 10 is 1.

// newnum is updated to 32*10 + 1 = 321.

// The function calls itself recursively with n/10 = 0 as input.

// Since n is now 0, the function returns the final value of newnum, which is 321.

// The main function stores the result 321 in the variable rev.

// The main function prints rev, which is 321.

// So the reversed number of 123 is 321, which is correctly calculated by the reversenum function.




