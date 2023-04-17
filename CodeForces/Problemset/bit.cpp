/*
HOMETOPCATALOGCONTESTSGYMPROBLEMSETGROUPSRATINGEDUAPICALENDARHELP


Codeforces Round 173 (Div. 2)
Finished
Practice
Add to favourites
→ Virtual participation
Virtual contest is a way to take part in past contest, as close as possible to participation on time. It is supported only ICPC mode for virtual contests. If you've seen these problems, a virtual contest is not for you - solve these problems in the archive. If you just want to solve some problem from a contest, a virtual contest is not for you - solve this problem in the archive. Never use someone else's code, read the tutorials or communicate with other person during a virtual contest.
→ Clone Contest to Mashup
You can clone this contest to a mashup.

→ Submit?
Language:	
GNU G++14 6.4.0
Choose file:	Nenhum arquivo escolhido
→ Last submissions
Submission	Time	Verdict
201971029	Apr/13/2023 20:21	Accepted
→ Problem tags
implementation*800
No tag edit access
→ Contest materials
Announcement
Round #173 — Editorial (en)
PROBLEMSSUBMITSTATUSSTANDINGSCUSTOM TEST
A. Bit++
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
The classic programming language of Bitland is Bit++. This language is so peculiar and complicated.

The language is that peculiar as it has exactly one variable, called x. Also, there are two operations:

Operation ++ increases the value of variable x by 1.
Operation -- decreases the value of variable x by 1.
A statement in language Bit++ is a sequence, consisting of exactly one operation and one variable x. The statement is written without spaces, that is, it can only contain characters "+", "-", "X". Executing a statement means applying the operation it contains.

A programme in Bit++ is a sequence of statements, each of them needs to be executed. Executing a programme means executing all the statements it contains.

You're given a programme in language Bit++. The initial value of x is 0. Execute the programme and find its final value (the value of the variable when this programme is executed).

Input
The first line contains a single integer n (1 ≤ n ≤ 150) — the number of statements in the programme.

Next n lines contain a statement each. Each statement contains exactly one operation (++ or --) and exactly one variable x (denoted as letter «X»). Thus, there are no empty statements. The operation and the variable can be written in any order.

Output
Print a single integer — the final value of x.*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x;
    string operacao;

    x  = 0;
    cin >> n;

    while(n != 0)
    {
        cin >> operacao;

        if(operacao[1] == '+')
        {
            x++;
        }
        else
        {
            x--;
        }

        n--;
    }

    cout << x;

    return 0;
}