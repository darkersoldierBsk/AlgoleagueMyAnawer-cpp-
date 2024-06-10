/*
New stickers have arrived at inzva Sanctuary.
But not enough stickers for every participant.
So, Havva decides to ask a question to participants and give a sticker for the right answer.
Havva gives the number N to participants and asks them to multiply all the digits except zeros.
Then asks them to apply the same operation to the result, until only one digit is left. The right answer is just that number.

Yasin really wants those stickers, can you help Yasin to get a sticker?

INPUT FORMAT
The only line contains a single integer N.

OUTPUT FORMAT
Print the one-digit result.

Constraints
1 ≤ N ≤ 10^18

SAMPLE INPUT      |  SAMPLE OUTPUT 
366               |  8

EXPLANATION 1
3 * 6 * 6 = 108
1 * 8 = 8
The answer is 8.

SAMPLE INPUT      |  SAMPLE OUTPUT 
157007997196592516 | 2
*/

#include <iostream>
#include <string>

using namespace std;

long long multiplyDigits(long long input){
    
    long long mult = 1;

    while(input>0){
        int x = input % 10;
        if(x!=0) mult *= x;
        input = input/10;
    }
    
    return mult;
}

int main(){
    long long N; cin>>N;
    
    while(N>9){
        
        N = multiplyDigits(N);
    }
    
    cout<<N<<endl;

    return 0;
}
