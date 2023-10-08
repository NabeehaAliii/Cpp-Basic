//                             //  1D Array
// #include<iostream>
// using namespace std;

// int main(){
//     int *p = new int[5];
//     // int *p = new int(5)
//     for(int i=0; i<5; i++){
//         p[i] = (i+1);
//     }
//     cout<<p<<endl;
//     cout<<p+1<<endl;
//     cout<<p+2<<endl;
//     cout<<p+3<<endl;
//     cout<<p+4<<endl;
//     cout<<*p<<endl;
//     cout<<p[0]<<endl;
//     cout<<0[p]<<endl;
//     cout<<*(p+0)<<endl;
//     cout<<*(p+1)<<endl;
//     cout<<*(p+2)<<endl;
//     cout<<*(p+3)<<endl;
//     cout<<*(p+4)<<endl;
//     return 0;
// }

                            //   2D Array


 
#include <iostream>
using namespace std;

int main() {
    // Declare a 2D array of size 3x3 using pointers
    int **p = new int*[3];
    // Declare Rows
    for (int i = 0; i < 3; i++) {
        p[i] = new int[3];
    }
    
    // Input values into the array
    cout << "Enter values for a 3x3 array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> *(*(p+i)+j);
        }
    }
    
    // Output the array values
    cout << "The array is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << *(*(p+i)+j) << " ";
        }
        cout << endl;
    }
    cout<<p<<endl;
    cout<<"Hello" <<endl;
    cout<<*p<<endl;             // Memory Address of p[0]
    cout<<**p<<endl;
    cout<<(p+0)<<endl;
    cout<<(p+1)<<endl;
    cout<<(p+2)<<endl;
    cout<<*(p+0)<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<"Hy"<<endl;
    cout<<**(p+0)<<endl;
    cout<<**(p+1)<<endl;
    cout<<**(p+2)<<endl;
    cout<<*(*(p+0)+1)<<endl;
    cout<<*(*(p+0)+2)<<endl;
    cout<<*(*(p+1)+1)<<endl;
    cout<<*(*(p+1)+2)<<endl;
    cout<<*(*(p+2)+1)<<endl;
    cout<<*(*(p+2)+2)<<endl;
    cout<<p[2][2]<<endl;
    
    // Deallocate the memory used by the array
    for (int i = 0; i < 3; i++) {
        delete[] p[i];
    }
    delete[] p;
    
    return 0;
}


// int main(){
//     char *c ="hello";
//     char* p = c;

//     cout<<(void*) p<<endl;
//     cout<<*p<<endl;
//     cout<<p<<endl;
//     cout<<(void*) &c[3]<<endl;
//     return 0;
// }