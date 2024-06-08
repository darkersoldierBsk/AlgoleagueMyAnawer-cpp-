/*
One day, Omar and Havva went to the ice cream shop.
There are N different types of ice cream and the shop has A(i) kilogram of each type. 
Omar wants to eat lots of ice cream, therefore he decided to eat all of the N − 1 types of ice cream and leave one type to Havva. 
Since he wants to eat lots of ice cream, could you print the maximum amount of ice cream that Omar can eat?

INPUT FORMAT
The first line contains one integer, N
The next line contains N integers,  A(i) — the amount of ice cream of type i.

OUTPUT FORMAT
Print a single integer — the maximum amount of ice cream Omar can eat.

Constraints
2 ≤ N ≤ 10^5
1 ≤ A(i) ≤ 10^3

SAMPLE INPUT      |  SAMPLE OUTPUT
8                 |       49
10 3 8 9 7 5 5 5  |

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, smallest, sum;
    sum = 0;
    cin >> n;
    vector<int> a(n,0);

    for (int i = 0; i < n; i++) cin >> a[i];

    smallest = a[0];

    for(int i = 0; i < n; i++) {
        sum += a[i];
        
        if (a[i] < smallest)
        {
            smallest = a[i];
        }
    }
    
    if(n != 1){
        sum = sum - smallest;
    }
    cout << sum;
    return 0;
}
