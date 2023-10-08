#include<iostream>
using namespace std;

void ContinuousCharachterProgram(int n){
    // char ch='A';
    // for(int i=1; i<=n; i++){
    // // char ch='A';
    //     for(int j=1; j<=i; j++){
    //     cout<<ch<<" ";
    //     ch++;
    //     }
    //     cout<<endl;
    // }

    // OR

    int number = 65;
    for (int i = 1; i <=n; i++) {
        for (int j =1; j <= i; j++) {
            char character = char(number);
            cout << character << " ";
            number++;
        }
    cout <<endl;
}
}

int main(){
    int n;
    cout<<"Enter n:"<<endl;
    cin>> n;

    ContinuousCharachterProgram(n);

}