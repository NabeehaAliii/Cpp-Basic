#include<iostream>
using namespace std;



int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key)
        return i;
    }
    return -1;
}


int BinarySearch(int arr[], int n, int key){
    int s=0;
    int e=n;
    
    while (s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid] == key)
        return mid;    // when mid == key
        else if (arr[mid]>key)
        e = mid-1;
        else 
        s = mid+1;
    }
    return -1;
}
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

    int key;
    cout<<"Enter a NUmber to search in an Array: "<<endl;
    cin>>key;

    cout<<"Index: "<<linearSearch(arr, n, key)<<endl;
    
    // First sort for BInary Search
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
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
    cout<<"\n";

    cout<<"Index: "<<BinarySearch(arr, n, key)<<endl;
    return 0;
}