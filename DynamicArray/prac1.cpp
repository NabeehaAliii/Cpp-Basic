// Write a program to create a 2D dynamic array of integers with m rows and n columns, and fill it with random values between 1 and 100.

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;

// int main()
// {
//     int m = 3, n = 4; // example values
//     int **arr = new int *[m];
//     srand(time(nullptr)); // set a different seed on every run
//     // In this example, the srand() function is called with the argument time(nullptr), which returns the current time in seconds since the Unix epoch (January 1, 1970). This value is used as the seed for the random number generator, which ensures that a different sequence of random numbers is generated on each run of the program.
//     for (int i = 0; i < m; i++)
//     {
//         arr[i] = new int[n];
//         for (int j = 0; j < n; j++)
//         {

//             arr[i][j] = rand() % 100 + 1;
//         }

//         // To obtain a random integer between 1 and 1000, the expression rand() % 1000 is used, which takes the remainder of the random number divided by 1000. Since RAND_MAX is typically much larger than 1000, this expression ensures that the resulting integer is between 0 and 999. By adding 1 to the result, we shift the range to 1-1000.
//     }
//     // print the array
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
//     // deallocate memory
//     for (int i = 0; i < m; i++)
//     {
//         delete[] arr[i];
//     }
//     delete[] arr;
//     return 0;
// }

// // Write a function to transpose a 2D dynamic array of integers, i.e., swap the rows and columns.
#include <iostream>
using namespace std;

void transpose(int **arr, int m, int n) {
    int **temp = new int*[n];
    for (int i = 0; i < n; i++) {
        temp[i] = new int[m];
        for (int j = 0; j < m; j++) {
            temp[i][j] = arr[j][i];
        }
    }
    // copy the transposed array back to arr
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[j][i] = temp[i][j];
        }
    }
    // deallocate memory
    for (int i = 0; i < n; i++) {
        delete[] temp[i];
    }
    delete[] temp;
}

int main() {
    int x= 1;
    int m = 3, n = 4; // example values
    int **arr = new int*[m];
    for (int i = 0; i < m; i++) {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++,x++) {
            // arr[i][j] = i * n + j + 1;
            arr[i][j] = 10 * x ;
        }
    }
    // print the original array
    cout << "Original array:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // transpose the array
    transpose(arr, m, n);
    // print the transposed array
    cout << "Transposed array:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    // deallocate memory
    for (int i = 0; i < m; i++) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}
