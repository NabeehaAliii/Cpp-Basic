// #include<iostream>
// using namespace std;

// void invertedHollowPattern(int n){
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i-1; j++)
//         cout<<"#";
//         int last = 2*n-1;
//         for(int j=1; j<=last; j++){
//         if (i==1)
//         cout<<"*";
//         else if ((i==j) && (j == last-i-1))
//         cout<<"*";
//         else
//         cout<<"^";
//         }

//         cout<<endl;
//     }
// }

// int main(){
//     int n;
//     cout<<"Enter n:"<<endl;
//     cin>> n;

//     invertedHollowPattern(n);
// }


// C++ program to Print a Inverted
// hollow Star Pyramid
#include <bits/stdc++.h>
using namespace std;

void print_patt(int R)
{
// To iterate through the rows
for(int i = 1; i <= R; i++)
{
	// To print the beginning spaces
	for(int sp = 1; sp <= i - 1 ; sp++)
	cout << " ";
	
	// Iterating from ith column to last column (R*2 - (2*i - 1))
	int last_col = (R * 2 - (2 * i - 1));
	// To iterate through column
	for(int j = 1; j <= last_col; j++)
	{
	if(i == 1)
		cout << "*";
	else if(j == 1)
		cout << "*";
	else if(j == last_col)
		cout << "*";
	else
		cout << " ";
	}
	cout << "\n";
}

// If it's the first row (i == 1), it prints an asterisk (*) for the entire row.
// If it's the first column (j == 1), it prints an asterisk (*).
// If it's the last column (j == last_col), it prints an asterisk (*).
// For any other column, it prints a space character (" ").
}

int main()
{
int R = 5;
print_patt(R);
return 0;
}
