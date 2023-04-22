/*A. Beautiful Year
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.

Input
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

Output
Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int year, aux2;
    set<int> aux;
    //aux.insert(0);

    cin >> year;

    while(aux.size() != 4)
    {
        year++;
        aux2 = year;
        aux.clear();

        do
        {
            aux.insert(aux2 % 10);

            aux2 = aux2 / 10;

        }while(aux2 != 0);
    }

    cout << year;


    return 0;
}