#include<iostream>
using namespace std;

void invertedPattern(int n){
    for (int i=n; i>=1; i--){
        for (int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void Zero_1Pattern(int n){

    for(int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            if((i+j)%2 ==0 )
            cout<<"1";
            else 
            cout<<"0";
        }
        cout<<endl;
    }
}

void Rombus(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=(n-i); j++)
        cout<<" ";
        for(int j=1; j<=n; j++)
        cout<<"*";
        cout<<endl;
    }
}

void NumberPattern(int n){
    for(int i=1; i<=n; i++){
        for (int j=1; j<=(n-i); j++)
        cout<<" ";
        for (int j=1; j<=i; j++)
        cout<<j <<" ";

        cout<<endl; 
    }
}

void Palindrome(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i; j++)
        cout<<"  ";

        for(int k=i, j=n-i; j<n; j++, k--){
            cout<<k<<" ";
        }

        for(int k=2, j=n; j<n+i-1; j++,k++)
        cout<<k<<" ";
    cout<<endl;
    }
}


void Diamond(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++)
        cout<<" ";

        for(int j=1; j<= (2*i-1); j++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=n; i>=1; i--){
        for(int j=1; j<=n-i; j++)
        cout<<" ";
    
        for(int j=1; j<= (2*i-1); j++)
        cout<<"*";
        cout<<endl;
    }
}

void zigzag(int n){

    for (int i=1; i<=3; i++){
        for(int j=1; j<=n; j++)
        if((((i+j)%4==0) || (i==2 && j%4==0)))
        cout<<"* ";
        else
        cout<<"  ";
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>> n;


    cout<<"\n\n\t Inverted Pattern\n";
    invertedPattern(n);
    cout<<"\n\n\t 0-1 Pattern\n";
    Zero_1Pattern(n);
    cout<<"\n\n\t Rombus Pattern\n";
    Rombus(n);
    cout<<"\n\n\t Number Pattern\n";
    NumberPattern(n);
    cout<<"\n\n\t PAlindrome Pattern\n";
    Palindrome(n);
    cout<<"\n\n\t Star/Diamond Pattern\n";
    Diamond(n);
    cout<<"\n\n\t ZigZag PAttern Pattern\n";
    zigzag(n);
    return 0;
}