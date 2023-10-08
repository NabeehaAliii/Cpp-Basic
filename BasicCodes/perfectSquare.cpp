// Define a function named 'perfect' that determines if parameter number is a perfect number. Use this function in a program that determines and prints all the perfect numbers between 1 and 1000.
// [An integer number is said to be "perfect number" if its factors, including 1(but not the number itself), sum to the number. E.g., 6 is a perfect number because 6=1+2+3].
#include<iostream>
#include<cmath>
using namespace std;

int perfect(int num);

int main(){
    int num; 
    cout<<"Enter a Number: "<<endl;
    cin>> num;

    perfect(num);

    return 0;
}

int perfect(int num){
    // if a parameter no. is a perfect number:
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num){
        cout<<num<<" is a perfect Square."<<endl;

        cout<<"Perfect Numbers between 1 and 1000 are: "<<endl;

        // print all perfect numbers between 6 and 1000.
        for (int i=1; i<1001; i++){
            int sum2 = 0;
            for (int j = 1; j < i; j++) {
                if (i % j == 0) {
                    sum2 += j;
                }
            }
            if (sum2 == i){
                cout<<i<<"   "<<endl;
            }
        }
    }
    else {
        cout<<num<<" is not a perfect square."<<endl;
    }
}

// #include <iostream>
// using namespace std;

// int main() {
//    int num, sum = 0;
//    cout << "Enter a number: ";
//    cin >> num;
   
//    // find the proper divisors of num and add them up
//    for (int i = 1; i < num; i++) {
//       if (num % i == 0) {
//          sum += i;
//       }
//    }
   
//    // check if the sum of the proper divisors is equal to the number
//    if (sum == num) {
//       cout << num << " is a perfect number.";
//    } else {
//       cout << num << " is not a perfect number.";
//    }
   
//    return 0;
// }
