#include<iostream>
#include<climits>
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

    int maxNO=INT_MIN, minNO=INT_MAX;

    for(int i=0; i<n; i++){
        // if (arr[i]>maxNO)
        // maxNO = arr[i];
        // if (arr[i]<minNO)
        // minNO = arr[i];

        // OR
        
        maxNO = max(maxNO,arr[i]);
        minNO = min(minNO,arr[i]);
    }

    cout<<"MAXIMUM VALUE: "<<maxNO<<endl;
    cout<<"MINUMUM VALUE: "<<minNO<<endl;


    return 0;
}