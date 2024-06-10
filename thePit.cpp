/*
Rose just staged a coup against Eve and took control of inzva, Kundura City's most dangerous neighborhood, also known as The Pit.
Aliens attacked The Pit while algorithmists were cheering “inzva is our home, Rose is our mother!”.
There are N flying saucers who are attacking the hood, so Rose needs the list of all binary strings of length N.
Help Rose, because inzva is our family and family is everything.

INPUT FORMAT
The only line contains an integer N, number of flying saucers.

OUTPUT FORMAT
Print 2^N binary strings in 2^N lines, in alphanumerical order.

Constraints
1 ≤ N ≤ 20

SAMPLE INPUT      |  SAMPLE OUTPUT 
3                 |  000
                  |  001
                  |  010
                  |  011
                  |  100
                  |  101
                  |  110
                  |  111

//IF YOU DON'T UNDERSTAND THE "RECURSIVE FUNCTIONS" YOU CAN CHECK THE COMMENT BLOCK THAT I ADDED AFTER THE CODE.
*/

#include <bits/stdc++.h>
using namespace std;
 
//PRINT THE ARRAY (FUNC.)
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
    cout << endl;
}
 
//GENERATE ALL BINARY STRINGSN (FUNC.)
void generateAllBinaryStrings(int n, int arr[], int i)
{
    if (i == n) {
        printArray(arr, n);
        return;
    }
 
    // First assign "0" at ith position
    // and try for all other permutations
    // for remaining positions
    arr[i] = 0;
    generateAllBinaryStrings(n, arr, i + 1);
 
    // And then assign "1" at ith position
    // and try for all other permutations
    // for remaining positions
    arr[i] = 1;
    generateAllBinaryStrings(n, arr, i + 1);
}
 

int main()
{
    int n ; cin >> n;
    int arr[n];
 
    // Print all binary strings
    generateAllBinaryStrings(n, arr, 0);
 
    return 0;
}

/*                  |
                    |     THE RECURSIVE LOGIC BEHIND THIS CODE LINES 
                    |     (for n = 2)
                    V
generateAllBinaryStrings(2, arr, 0)
  ├── arr[0] = 0
  │   └── generateAllBinaryStrings(2, arr, 1)
  │       ├── arr[1] = 0
  │       │   └── generateAllBinaryStrings(2, arr, 2)  // Prints 00
  │       └── arr[1] = 1
  │           └── generateAllBinaryStrings(2, arr, 2)  // Prints 01
  └── arr[0] = 1
      └── generateAllBinaryStrings(2, arr, 1)
          ├── arr[1] = 0
          │   └── generateAllBinaryStrings(2, arr, 2)  // Prints 10
          └── arr[1] = 1
              └── generateAllBinaryStrings(2, arr, 2)  // Prints 11
*/
