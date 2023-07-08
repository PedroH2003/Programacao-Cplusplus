/*A. Team Olympiad
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
The School №0 of the capital of Berland has n children studying in it. All the children in this school are gifted: some of them are good at programming, some are good at maths, others are good at PE (Physical Education). Hence, for each child we know value ti:

ti = 1, if the i-th child is good at programming,
ti = 2, if the i-th child is good at maths,
ti = 3, if the i-th child is good at PE
Each child happens to be good at exactly one of these three subjects.

The Team Scientific Decathlon Olympias requires teams of three students. The school teachers decided that the teams will be composed of three children that are good at different subjects. That is, each team must have one mathematician, one programmer and one sportsman. Of course, each child can be a member of no more than one team.

What is the maximum number of teams that the school will be able to present at the Olympiad? How should the teams be formed for that?

Input
The first line contains integer n (1 ≤ n ≤ 5000) — the number of children in the school. The second line contains n integers t1, t2, ..., tn (1 ≤ ti ≤ 3), where ti describes the skill of the i-th child.

Output
In the first line output integer w — the largest possible number of teams.

Then print w lines, containing three numbers in each line. Each triple represents the indexes of the children forming the team. You can print both the teams, and the numbers in the triplets in any order. The children are numbered from 1 to n in the order of their appearance in the input. Each child must participate in no more than one team. If there are several solutions, print any of them.

If no teams can be compiled, print the only line with value w equal to 0.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, w; cin >> n;
    vector<int> a (n);
    vector<vector<int>> v;
    v.resize(3);

    for(int i=0; i<n; i++) 
    {
        cin >> a[i];

        if(a[i] == 1)
        {
            v[0].push_back(i+1);
        }
        else if(a[i] == 2)
        {
            v[1].push_back(i+1);
        }
        else if(a[i] == 3)
        {
            v[2].push_back(i+1);
        }
    }

    w = min({v[0].size(), v[1].size(), v[2].size()});

    cout << w;
    if(w != 0)
    {
        cout << "\n";
        for(int i=0; i<w; i++)
        {
            cout << v[0][i] << " " << v[1][i] << " " << v[2][i] << "\n";
        }
    }


    return 0;
}