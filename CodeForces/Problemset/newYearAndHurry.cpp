/*A. New Year and Hurry
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Limak is going to participate in a contest on the last day of the 2016. The contest will start at 20:00 and will last four hours, exactly until midnight. There will be n problems, sorted by difficulty, i.e. problem 1 is the easiest and problem n is the hardest. Limak knows it will take him 5·i minutes to solve the i-th problem.

Limak's friends organize a New Year's Eve party and Limak wants to be there at midnight or earlier. He needs k minutes to get there from his house, where he will participate in the contest first.

How many problems can Limak solve if he wants to make it to the party?

Input
The only line of the input contains two integers n and k (1 ≤ n ≤ 10, 1 ≤ k ≤ 240) — the number of the problems in the contest and the number of minutes Limak needs to get to the party from his house.

Output
Print one integer, denoting the maximum possible number of problems Limak can solve so that he could get to the party at midnight or earlier.*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, i=1, k, aux=0, cont=0;

    cin >> n >> k;

    k = 240 - k;

    if(k > 0)
    {
        while(aux <= k and i <= n)
        {
            aux = aux + (5*i);
            i++;
            cont++;
        }

        if(aux > k)
        {
            aux = aux - (5*(i-1));
            cont--;
        }


    }
    cout << cont;


    return 0;
}