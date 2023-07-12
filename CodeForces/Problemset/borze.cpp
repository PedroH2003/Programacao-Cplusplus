/*Ternary numeric notation is quite popular in Berland. To telegraph the ternary number the Borze alphabet is used. Digit 0 is transmitted as «.», 1 as «-.» and 2 as «--». You are to decode the Borze code, i.e. to find out the ternary number given its representation in Borze alphabet.

Input
The first line contains a number in Borze code. The length of the string is between 1 and 200 characters. It's guaranteed that the given string is a valid Borze code of some ternary number (this number can have leading zeroes).

Output
Output the decoded ternary number. It can have leading zeroes.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string borze; cin >> borze;
    string num = "";
    int cont=0;

    for(int i=0; i<borze.size(); i++)
    {
        if(borze[i] == '-' and i != borze.size()-1 and borze[i+1] == '-')
        {
            num += '2';
            i++;
        }
        else if(borze[i] == '-' and i != borze.size()-1 and borze[i+1] == '.')
        {
            num += '1';
            i++;
        }
        else
        {
            num += '0';
        }   
    }

    cout << num;

    return 0;
}