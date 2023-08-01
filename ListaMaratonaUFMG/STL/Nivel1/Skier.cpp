/*Skier rides on a snowy field. Its movements can be described by a string of characters 'S', 'N', 'W', 'E' (which correspond to 1
 meter movement in the south, north, west or east direction respectively).

It is known that if he moves along a previously unvisited segment of a path (i.e. this segment of the path is visited the first time), then the time of such movement is 5
 seconds. If he rolls along previously visited segment of a path (i.e., this segment of the path has been covered by his path before), then it takes 1
 second.

Find the skier's time to roll all the path.

Input
The first line contains an integer t
 (1≤t≤104
) — the number of test cases in the input. Then t
 test cases follow.

Each set is given by one nonempty string of the characters 'S', 'N', 'W', 'E'. The length of the string does not exceed 105
 characters.

The sum of the lengths of t
 given lines over all test cases in the input does not exceed 105
.

Output
For each test case, print the desired path time in seconds.*/


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;

    while(t--)
    {
        map<pair<int, int>, int> pontos;
        vector<set<pair<int, int>>> caminho;
        string s; cin >> s; caminho.resize(s.size()+1);
        int x=0, y=0, pos, temp=0;

        pontos[make_pair(x, y)] = 0;

        for(int i=0; i<s.size(); i++)
        {
            int antx, anty; antx = x; anty = y;
            if(s[i] == 'N')
            {
                y++;
            }
            else if(s[i] == 'S')
            {
                y--;
            } 
            else if(s[i] == 'W')
            {
                x--;
            }
            else if(s[i] == 'E')
            {
                x++;
            }

            if(pontos.find(make_pair(x, y)) != pontos.end())
            {
                pos = pontos[make_pair(x, y)];
                if(caminho[pos].find(make_pair(antx, anty)) != caminho[pos].end())
                {
                    temp++;
                }
                else
                {
                    caminho[pos].insert(make_pair(antx, anty));
                    pos = pontos[make_pair(antx, anty)];
                    caminho[pos].insert(make_pair(x, y));
                    temp += 5;
                }
            }
            else
            {
                pontos[make_pair(x, y)] = i+1;
                caminho[i+1].insert(make_pair(antx, anty));
                pos = pontos[make_pair(antx, anty)];
                caminho[pos].insert(make_pair(x, y));
                temp += 5;
            }
        }

        cout << temp << "\n";
    }
    

    
    
    return 0;
}