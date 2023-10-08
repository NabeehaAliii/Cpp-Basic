#include<iostream>
#include<climits>
using namespace std;


// //Ques1:  Given an array of size n, for every i from 0 to n-1 output max(a[0], a[1], ...., a[i])
// // IMportant its always increasing never decreasing.
// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int arr[n];

//     for(int i=0; i<n; i++){ cin>>arr[i]; }

//     int mx=INT_MIN; 
//     for(int i=0; i<n; i++){
//         mx = max(mx,arr[i]);
//         cout<<mx<<endl;
//     }
// }



// Ques2:  GIven an array of size n, Output Sum of each subarray of the given array.
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){ cin>>arr[i]; }

// Take Sum of all subarrays individually;
    int sum=0;
    for(int i=0; i<n; i++){
        sum=0;
        for(int j=i; j<n; j++){
            sum += arr[j];
            cout << sum << "   ";
        }
    }

    return 0;
}