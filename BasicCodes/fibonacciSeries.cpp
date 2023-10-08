// #include<iostream>
// using namespace std;

// int fib(int x)
// {
//     if(x == 0)
//     {
//         return 0;
//     }
//     else if(x==1)
//     {
//         return 1;
//     }
//     else
//     {
//         return fib(x-1)+fib(x-2);
//     }
// }

// int main()
// {
//     cout << fib(0) << "\n";
//     cout << fib(1) << "\n";
//     cout << fib(2) << "\n";
//     cout << fib(3) << "\n";
//     cout << fib(4) << "\n";
//     cout << fib(5) << "\n";

//     return 0;

// }

// // Full SEries

#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if(n == 0 || n == 1) {
        return n;
    } else {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}

int main()
{
    int n, i = 0;
    cout << "Input the number of terms for Fibonacci Series: ";
    cin >> n;
    cout << "\nFibonacci Series is as follows:\n";
    while(i < n) {
        cout << fibonacci(i) << " ";
        i++;
    }
    return 0;
}
