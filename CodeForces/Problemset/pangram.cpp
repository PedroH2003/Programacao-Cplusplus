/*A. Pangram
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
A word or a sentence in some language is called a pangram if all the characters of the alphabet of this language appear in it at least once. Pangrams are often used to demonstrate fonts in printing or test the output devices.

You are given a string consisting of lowercase and uppercase Latin letters. Check whether this string is a pangram. We say that the string contains a letter of the Latin alphabet if this letter occurs in the string in uppercase or lowercase.

Input
The first line contains a single integer n (1 ≤ n ≤ 100) — the number of characters in the string.

The second line contains the string. The string consists only of uppercase and lowercase Latin letters.

Output
Output "YES", if the string is a pangram and "NO" otherwise.*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    string word, pangram="YES";
    set<char> alphabet;
    int n, cont=0;

    cin >> n;
    cin.ignore();
    getline(cin, word);

    for(char i: word)
    {
        if(i != ' ')
        {
            if(i >= 'a' and i <= 'z')
            {
                alphabet.insert(i);
            }
            else if(i >= 'A' and i <= 'Z')
            {
                alphabet.insert(i+32);
            }
            else
            {
                pangram = "NO";
                break;
            }
        }

    }

    if(alphabet.size() != 26)
    {
        pangram = "NO";
    }

    cout << pangram;

    return 0;
}