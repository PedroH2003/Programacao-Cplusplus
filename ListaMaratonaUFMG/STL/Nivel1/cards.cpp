/*When Serezha was three years old, he was given a set of cards with letters for his birthday. They were arranged into words in the way which formed the boy's mother favorite number in binary notation. Serezha started playing with them immediately and shuffled them because he wasn't yet able to read. His father decided to rearrange them. Help him restore the original number, on condition that it was the maximum possible one.

Input
The first line contains a single integer n
 (1⩽n⩽105
) — the length of the string. The second line contains a string consisting of English lowercase letters: 'z', 'e', 'r', 'o' and 'n'.

It is guaranteed that it is possible to rearrange the letters in such a way that they form a sequence of words, each being either "zero" which corresponds to the digit 0
 or "one" which corresponds to the digit 1
.

Output
Print the maximum possible number in binary notation. Print binary digits separated by a space. The leading zeroes are allowed.*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n; cin >> n;
    string card, resp=""; cin >> card;

    for(int i=0; i<card.size(); i++)
    {
        if(card[i] == 'n')
        {
            if(n != card.size())
            {
                resp += " 1";
            }
            else
            {
                resp += "1";
            }

            n -= 3;
        }
    }

    n /= 4;
    while(n != 0)
    {
        if(n != card.size()/4)
        {
            resp += " 0";
        }
        else
        {
            resp += "0";
        }
        n--;
    }

    cout << resp;

    return 0;
}