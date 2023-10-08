// Consider an integer array, the number of elements in which is determined by the user. The elements are also taken as input from the user. Write a program to find those pair of elements that has the maximum and minimum difference among all element pairs.

#include <iostream>
#include <cstdlib>
#include <climits>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_diff = INT_MIN;
    int min_diff = INT_MAX;
    int max_index1, max_index2, min_index1, min_index2;

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            int diff = abs(arr[i] - arr[j]);

            if (diff > max_diff) {
                max_diff = diff;
                max_index1 = i;
                max_index2 = j;
            }

            if (diff < min_diff) {
                min_diff = diff;
                min_index1 = i;
                min_index2 = j;
            }
        }
    }

    cout << "Pair with maximum difference: (" << arr[max_index1] << ", " << arr[max_index2] << ")" << endl;
    cout << "Pair with minimum difference: (" << arr[min_index1] << ", " << arr[min_index2] << ")" << endl;

    return 0;
}
