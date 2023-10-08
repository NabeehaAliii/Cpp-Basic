#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declare and initialize a string array
    string str_arr[3] = {"Hello", "World", "!"};
    
    // Printing a string array
    cout << "The string array is: ";
    for (int i = 0; i < 3; i++) {
        cout << str_arr[i] << " ";
    }
    cout << endl;
    
    // Accessing individual characters of a string array
    cout << "The second character of the first element is: " << str_arr[0][1] << endl;
    cout << "The fourth character of the second element is: " << str_arr[1][3] << endl;
    
    // Modifying individual characters of a string array
    str_arr[0][0] = 'h';
    str_arr[1][2] = 'l';
    cout << "The modified string array is: ";
    for (int i = 0; i < 3; i++) {
        cout << str_arr[i] << " ";
    }
    cout << endl;
    
    // Concatenating two strings
    string str1 = "Hello";
    string str2 = "World";
    string str3 = str1 + " " + str2;
    cout << "The concatenated string is: " << str3 << endl;
    
    // Finding the length of a string
    string str = "Hello, World!";
    int len = str.length();
    cout << "The length of the string is: " << len << endl;
    
    return 0;
}
