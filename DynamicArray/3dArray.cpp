#include <iostream>
 
// `X × Y × Z` matrix
#define X 2        // 2 blocks
#define Y 3        // Each block has 3 rows
#define Z 4        // Each Row has 4 columns 
 
// Dynamically allocate memory for 3D Array in C++
int main()
{
    int*** A = new int**[X];
 
    for (int i = 0; i < X; i++)
    {
        A[i] = new int*[Y];
        for (int j = 0; j < Y; j++) {
            A[i][j] = new int[Z];
        }
    }
 
    // assign values to the allocated memory
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            for (int k = 0; k < Z; k++) {
               std:: cin>> A[i][j][k];
            }
        }
    }
 
    // print the 3D array
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            for (int k = 0; k < Z; k++) {
                std::cout << A[i][j][k] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
 
    // deallocate memory
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++) {
            delete[] A[i][j];
        }
        delete[] A[i];
    }
 
    delete[] A;
 
    return 0;
}
