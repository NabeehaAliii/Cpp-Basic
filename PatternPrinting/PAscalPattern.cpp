#include<iostream>
#include<math.h>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i=n; i>0; i--){
        fact *= i;
    }
    return fact;
}

void PascalTriangle(int n){
    for (int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<factorial(i) / (factorial(i-j) * factorial(j))<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter Rows: ";
    cin>>n;

    PascalTriangle(n);

}