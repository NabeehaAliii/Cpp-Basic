#include<iostream>
using namespace std;


int main(){
       int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];

    cout<<"Enter An Array: "<<endl;

    for(int i=0;i<n; i++){
        cin>>arr[i];
    }

    cout<<"Array Output: "<<endl;    

    for(int i=0;i<n; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<"\n";

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]>arr[i]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<"Sorted Array: "<<endl;

    for(int i=0;i<n; i++){
        cout<<arr[i]<<"  ";
    }

    return 0;
}