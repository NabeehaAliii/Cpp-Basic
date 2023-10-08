#include <iostream>
using namespace std;
int main()
{
    int N = 3;
    int **p = new int *[N];
    int x = 1;
    for (int i = 0; i < N; i++)
    {
        p[i] = new int[N]; // declaring the columns
        for (int j = 0; j < N; j++, x++)
        {
            p[i][j] = 10 * x; // Initailzing the array using this statement *(*(p+i)+j) = 10 * x
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << *(*(p + i) + j) << "\t";
        }
        cout << endl;
    }

    // Only Addresses

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << ((p + i) + j) << "\t";
        }
        cout << endl;
    }

    cout<<"Hello"<<endl;
    cout << *p << endl;
    cout << **p << endl;
    cout << *p + 1 << endl;                // Address +4 bytes
    cout << *(*p + 1) << endl;                // Address +4 bytes
    cout<< *(p+1)<<endl;
    cout << **p + 1 << endl;               
    cout << *(*(p + 1) + 2) << endl;
    cout << *(*(p + 1) + 0) << endl;
    cout << p[1][0] << endl;               // Same as above 
    cout << p[2][2] << endl;
    cout << *(*(p+2)+2)<< endl;            // Same as above

    return 0;
}
