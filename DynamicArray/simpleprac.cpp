// // C++ program to dynamically allocate
// // the memory for 2D array in C++
// // using new operator
// #include <iostream>
// using namespace std;

// // Driver Code
// int main()
// {
// 	// Dimensions of the 2D array
// 	int m = 3, n = 4, c = 0;

// 	// Declare a memory block of
// 	// size m*n
// 	int* arr = new int[m * n];

// 	// Traverse the 2D array
// 	for (int i = 0; i < m; i++) {
// 		for (int j = 0; j < n; j++) {

// 			// Assign values to
// 			// the memory block
// 			*(arr + i * n + j) = ++c;                    // arr+0 4+0 = oth index,  arr+0 4+1(byte) = 1st index
// 		}
// 	}

// 	// Traverse the 2D array
// 	for (int i = 0; i < m; i++) {
// 		for (int j = 0; j < n; j++) {

// 			// Print values of the
// 			// memory block
// 			cout << *(arr + i * n + j)<< " ";
// 		}
// 		cout << endl;
// 	}

// 	//Delete the array created
// 	delete[] arr;

// 	return 0;
// }


#include <iostream>
using namespace std;

// Driver Code
int main()
{   int m=3, n=4;
    int** p = new int*[m];

    for(int i=0; i<m; i++){
        p[i] = new int[n];
    }
    int x=1;
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++, x++){
            *(*(p+i)+j) = x;
        }
    }

     for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
           cout<< *(*(p+i)+j)<<"  "; 
        }
        cout<<endl;
    }

    //Delete The Array

    for (int i=0; i<m; i++){
        delete [] p[i];      // To delete the inner Array
    delete p;               // To delete the outer Array
}
	return 0;
}