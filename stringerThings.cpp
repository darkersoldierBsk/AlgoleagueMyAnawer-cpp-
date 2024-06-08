/*
Strange things are happening in inzva.
The word machine that causes these strange things is destroying the words that are new to inzva.
If identical letters are consecutive, this machine deletes consecutive and identical letters of a received word, leaving only one of the identical letters
In other words, identical characters will not be consecutive in the arranged word. Your task is to print the final version of the word that was changed by the machine.

INPUT FORMAT
The first line contains one integer, N.
The second line contains N sized string.

OUTPUT FORMAT
Print the rearranged string in one line.

Constraints
1 ≤ N ≤ 10^5

SAMPLE INPUT   |  SAMPLE OUTPUT
9              |      SVEJ
SSSVEEEJJ      |

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string word, rearranged;
    cin >> word;
    
    rearranged += word[0];
    
    for (int i = 1; i < n; i++) {
        if (word[i] != word[i - 1]) {
            rearranged += word[i];
        }
    }
    
    cout << rearranged << endl;

    return 0;
}
