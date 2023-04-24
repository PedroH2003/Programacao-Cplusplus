/*A. Puzzles
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
The end of the school year is near and Ms. Manana, the teacher, will soon have to say goodbye to a yet another class. She decided to prepare a goodbye present for her n students and give each of them a jigsaw puzzle (which, as wikipedia states, is a tiling puzzle that requires the assembly of numerous small, often oddly shaped, interlocking and tessellating pieces).

The shop assistant told the teacher that there are m puzzles in the shop, but they might differ in difficulty and size. Specifically, the first jigsaw puzzle consists of f1 pieces, the second one consists of f2 pieces and so on.

Ms. Manana doesn't want to upset the children, so she decided that the difference between the numbers of pieces in her presents must be as small as possible. Let A be the number of pieces in the largest puzzle that the teacher buys and B be the number of pieces in the smallest such puzzle. She wants to choose such n puzzles that A - B is minimum possible. Help the teacher and find the least possible value of A - B.

Input
The first line contains space-separated integers n and m (2 ≤ n ≤ m ≤ 50). The second line contains m space-separated integers f1, f2, ..., fm (4 ≤ fi ≤ 1000) — the quantities of pieces in the puzzles sold in the shop.

Output
Print a single integer — the least possible difference the teacher can obtain.*/

//FIZ MAS NÃO ENTENDI BEM

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, m, min1, aux;
    vector<int> f;

    cin >> n >> m;

    f.resize(m);

    for(int i=0; i<m; i++)
    {
        cin >> f[i];
    }
    sort(f.begin(), f.end());

    min1 = f[n-1] - f[0];

    for(int i=1; i <= m - n; i++)
    {
        aux = f[i + n -1] - f[i];

        min1 = min(min1, aux);
    }

    cout << min1;


}