#include<iostream>
using namespace std;

int main(){
// Create a dynamic array with size 5
int *arr = new int[5];

// Resize the array to size 10
int *newArr = new int[10];
for (int i = 0; i < 5; i++) {
    newArr[i] = arr[i];
}
delete[] arr;
// arr = newArr;

// Use the resized array
for (int i = 0; i < 10; i++) {
    newArr[i] = i + 1;
}

for (int i = 0; i < 10; i++) {
    cout<<newArr[i]<<"  ";
}


// Delete the dynamic array
delete[] newArr;

return 0;
}