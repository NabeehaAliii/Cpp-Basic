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

    for(int i=1; i<n; i++){
        int current = arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = current; 
    } 

    cout<<"Sorted Array: "<<endl;

    for(int i=0;i<n; i++){
        cout<<arr[i]<<"  ";
    }

    return 0;
}