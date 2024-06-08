/*
Usain Bolt is a world famous athlete.
In his whole career, he broke lots of new records.
The points he got from the races he entered are given.
The task is to find how many times Usain Bolt broke his own record.

INPUT FORMAT
The first line contains one integer, N.
The second line contains N sized integer array.

OUTPUT FORMAT
Print the number of broken records in one line.

Constraints
1 ≤ N ≤ 10^5
1 ≤ points ≤ 10^5

SAMPLE INPUT      |  SAMPLE OUTPUT 
5                 |  2
3 7 2 6 8         |  

SAMPLE INPUT      |  SAMPLE OUTPUT 
5                 |  4
1 2 3 4 5         |
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, record , count = 0;
    cin >> n;
    int arr[n] = {0};
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    record = arr[0];
    for(int i = 1; i < n; i++){
        if(record < arr[i]){
            record = arr[i];
            count++;
        } 
    }
    
    cout << count;
    return 0;
}
