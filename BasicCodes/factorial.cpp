#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout<<"Find factorial of: "<<endl;
//     cin>> n;

//     int fact =1; 
//     for (int i=1; i<=n; i++){
//         fact *= i;
//     }

//     cout<<"Factorial of "<<n<<" is "<< fact;

//     return 0;
// }

// Recursion:

int factorial(int n){
    if (n==0 || n==1)
    return 1;

    else 
    return n* factorial(n-1);
}

int main(){
    int n;
    cout<<" Find factorial of"<<endl;
    cin>>n;

    int fact = factorial(n);
    cout<<"Factorial of: "<<fact<<endl;
    return 0;
}