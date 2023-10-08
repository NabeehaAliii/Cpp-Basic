#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // Declare and initialize a character array
    char str1[] = "Hello";
    char str2[] = "World";
    
    // Printing a character array
    cout << "The string is: " << str1 << endl;
    
    // Accessing individual characters of a character array
    cout << "The first character of the string is: " << str1[0] << endl;
    cout << "The fourth character of the string is: " << str1[3] << endl;
    
    // Modifying individual characters of a character array
    str1[0] = 'h';
    cout << "The modified string is: " << str1 << endl;
    
    // Concatenating two character arrays
    char str3[12];
    strcpy(str3, str1);
    strcat(str3, " ");
    strcat(str3, str2);
    cout << "The concatenated string is: " << str3 << endl;
    
    // Finding the length of a character array
    int len = strlen(str3);
    cout << "The length of the string is: " << len << endl;
    
    return 0;
}
