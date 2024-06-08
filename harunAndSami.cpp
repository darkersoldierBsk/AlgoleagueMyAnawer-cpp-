/*
Harun and Sami are very good friends.
They play a game for N rounds. In each round, Harun or Sami wins.
In other words, a round never ends in a draw.
To win the game, you need to win more rounds than your opponent.

Unfortunately, they only remember the result of the first K rounds. 
Also, both of them claim to have won the game. 
Therefore, you need to determine if anyone has definitely won the game or not by considering the first K rounds.

INPUT FORMAT
The first line contains two integers, N and K, separated by a space.
The next line contains a string with K characters. The letter H denotes that Harun won that round, and the letter S denotes that Sami won that round.

OUTPUT FORMAT
If it is certain that Harun won the game, print "Harun".
If it is certain that Sami won the game, print "Sami".
If the winner cannot be determined from the results of the first K rounds, print "Cilek".

Constraints
1 ≤ K ≤ N ≤ 10^5

SAMPLE INPUT      |  SAMPLE OUTPUT 
7 5               |  Harun
HSHHH             |

SAMPLE INPUT      |  SAMPLE OUTPUT 
7 5               |  Cilek
HSHSH             |
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K; cin >> N >> K; int gameLeft = N - K;
    string s; cin >> s;
    int countH = 0, countS = 0;
    
    int i= 0;
    while(s[i]){
        if(s[i] == 'H') countH++;
        else if(s[i] == 'S') countS++;
        i++;
    }
    
    if(countS > countH){
        countH += gameLeft;
        if(countS > countH){
            cout << "Sami";
        }else{
            cout << "Cilek";
        }
    }else if(countS < countH){
        countS += gameLeft;
        if(countS < countH){
            cout << "Harun";
        }else{
            cout << "Cilek";
        }
    }else{
            cout << "Cilek";
    }
    
    return 0;
}
