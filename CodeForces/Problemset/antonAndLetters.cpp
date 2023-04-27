/*A. Anton and Letters
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Recently, Anton has found a set. The set consists of small English letters. Anton carefully wrote out all the letters from the set in one line, separated by a comma. He also added an opening curved bracket at the beginning of the line and a closing curved bracket at the end of the line.

Unfortunately, from time to time Anton would forget writing some letter and write it again. He asks you to count the total number of distinct letters in his set.

Input
The first and the single line contains the set of letters. The length of the line doesn't exceed 1000. It is guaranteed that the line starts from an opening curved bracket and ends with a closing curved bracket. Between them, small English letters are listed, separated by a comma. Each comma is followed by a space.

Output
Print a single number — the number of distinct letters in Anton's set.*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    string setLetters;
    set<char> cont;

    getline(cin, setLetters);

    for(int i=1; i<setLetters.size()-1; i+=3)
    {
        if(i != setLetters.size()-1 and setLetters[i] != ' ')
        {
            cont.insert(setLetters[i]);
        }
    }

    cout << cont.size();

    return 0;
}