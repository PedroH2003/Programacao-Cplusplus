/*A. Is It a Cat?
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
You were walking down the street and heard a sound. The sound was described by the string s
 consisting of lowercase and uppercase Latin characters. Now you want to find out if the sound was a cat meowing.

For the sound to be a meowing, the string can only contain the letters 'm', 'e', 'o' and 'w', in either uppercase or lowercase. Also:

string must start with non-empty sequence consisting only of characters 'm' or 'M'
it must be immediately followed by non-empty sequence consisting only of characters 'e' or 'E'
it must be immediately followed by non-empty sequence consisting only of characters 'o' or 'O'
it must be immediately followed by non-empty sequence consisting only of characters 'w' or 'W', this sequence ends the string, after it immediately comes the string end
For example, strings "meow", "mmmEeOWww", "MeOooOw" describe a meowing, but strings "Mweo", "MeO", "moew", "MmEW", "meowmeow" do not.

Determine whether the sound you heard was a cat meowing or something else.

Input
The first line of input data contains a single integer t
 (1≤t≤104
) — the number of test cases.

The description of the test cases follows.

The first line of each test case contains an integer n
 (1≤n≤50
) — the length of the string describing the sound.

The second line of each test case contains a string s
 of n
 characters. The string describes the sound you heard and consists only of lowercase and uppercase Latin letters.

Output
For each test case, output on a separate line:

YES if the sound was a cat meowing;
NO otherwise.
You can output YES and NO in any case (for example, strings yEs, yes, Yes and YES will be recognized as positive response).
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, j, resp;
    string m;
    string m2="meow";
    j = 0;

    cin >> t;

    while(t > 0)
    {
        resp = 1;
        j = 0;
        cin >> n;
        cin.ignore();
        cin >> m;

        for(int i=0; i<n; i++)
        {
            if(m[i] == m2[j] or m[i] == m2[j] - 32)
            {
                continue;
            }
            else
            {
                if((i != 0) and (m2[j] != 'w') and (m[i] == m2[j+1] or m[i] == m2[j+1] - 32))
                {
                    j++;
                }
                else
                {
                    resp = 0;
                    break;
                }
            }
        }

        if(resp == 1)
        {
            if(j != 3)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            } 
        }
        else
        {
            cout << "NO" << endl;
        }

        t--;
    }


    return 0;
}

/*
    string a;
    int b;

    cin >> b;
    cin.ignore(); //Limpar o buffer do teclado em c++
    getline(cin, a); //Ler string com espaço
    cout << a;
*/