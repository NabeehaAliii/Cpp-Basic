#include<iostream>
using namespace std;


void invertedHalfPyramid(int n){
    for(int i=n; i>0; i--){
        for (int j=0; j<i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void leftHalfPyramid(int n){

    for(int i=0; i<n; i++){
        for (int j=0; j<n; j++){
             if(j < (n-i-1))
            cout<<" ";
            else
            cout<<"*";
        }
        cout<<endl;
    }

}

void halfPyramidUsingNumber(int n){

    for(int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return;
}

void halfPyramidUsingNumber1to5(int n){

    for(int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return;
}

void FloydTrianlge(int n){
    int count =1;
    for(int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout<< count++<<" ";   
        }
        cout<<endl;
    }
    return;
}

void ButterflyPattern(int n){

    for(int i=1; i<=n; i++){
        for (int j=1; j<=i; j++)
           cout<<"*";
        
        int space = 2*n - 2*i;
        for (int j=1; j<=space; j++)
        cout<<" ";

        for (int j=1; j<=i; j++)
        cout<<"*";
    cout<<endl;
}

    for(int i=n; i>=1; i--){
        for (int j=1; j<=i; j++)
           cout<<"*";
        
        int space = 2*n - 2*i;
        for (int j=1; j<=space; j++)
        cout<<" ";

        for (int j=1; j<=i; j++)
        cout<<"*";
    cout<<endl;
}
    return;
}
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>> n;

    cout<<"\n\n\t Inverted HAlf Pyramid\n";
    invertedHalfPyramid(n);
    cout<<"\n\n\t LEft HAlf Pyramid\n";
    leftHalfPyramid(n);
    cout<<"\n\n\t HAlf Pyramid Using Numbers\n";
    halfPyramidUsingNumber(n);
    cout<<"\n\n\t HAlf Pyramid Using Numbers from 1 to 5\n";
    halfPyramidUsingNumber1to5(n);
    cout<<"\n\n\t Floyd Triangle\n";
    FloydTrianlge(n);
    cout<<"\n\n\t ButterFly Pattern\n";
    ButterflyPattern(n);
    return 0;
}