/*A. I Wanna Be the Guy
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
There is a game called "I Wanna Be the Guy", consisting of n levels. Little X and his friend Little Y are addicted to the game. Each of them wants to pass the whole game.

Little X can pass only p levels of the game. And Little Y can pass only q levels of the game. You are given the indices of levels Little X can pass and the indices of levels Little Y can pass. Will Little X and Little Y pass the whole game, if they cooperate each other?

Input
The first line contains a single integer n (1 ≤  n ≤ 100).

The next line contains an integer p (0 ≤ p ≤ n) at first, then follows p distinct integers a1, a2, ..., ap (1 ≤ ai ≤ n). These integers denote the indices of levels Little X can pass. The next line contains the levels Little Y can pass in the same format. It's assumed that levels are numbered from 1 to n.

Output
If they can pass all the levels, print "I become the guy.". If it's impossible, print "Oh, my keyboard!" (without the quotes).*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    set<int> levels;
    int n, p, q, aux;
    string resp = "I become the guy.";

    cin >> n;

    cin >> p;
    while(p != 0)
    {
        cin >> aux;

        levels.insert(aux);
        p--;
    }

    cin >> q;  
    while(q != 0)
    {
        cin >> aux;

        levels.insert(aux);

        q--;
    }

    while(n != 0)
    {
        if(levels.find(n) == levels.end())
        {
            resp = "Oh, my keyboard!";
            break;
        }
        n--;
    }

    cout << resp;

    return 0;
}