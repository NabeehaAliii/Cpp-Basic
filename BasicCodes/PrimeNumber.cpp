// Define a function to find out if number is prime or not.

// #include<iostream>
// using namespace std;
// bool prime(int x)
// {
//     for(int i = 2; i<x; i++)
//     {
//         if(x%i == 0)
//             return false;
//     }
//     return true;    
// }

// int main()
// {
//     cout << prime(5) << "\n";
//     cout << prime(10) << "\n";
//     return 0;
// }



// First 10 prime numbers:

#include<iostream>
using namespace std;

bool is_prime(int n){
    if (n < 2) {
        return false;
    }
    for(int i=2; i<n; i++){
        if(n%i==0)
        return false;
        }
    return true;
}

void prime_series(int num){
    for(int i=2; i<=num; i++){
       if(is_prime(i)){
       cout<<i<<"  ";
       }
    }
}

int main()
{
    int num;
    cout<<"How Many Prime Numbers you want: "<<endl;
    cin>> num;

    prime_series(num);

    return 0;
}
