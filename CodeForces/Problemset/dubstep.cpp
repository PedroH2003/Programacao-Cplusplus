/*A. Dubstep
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vasya works as a DJ in the best Berland nightclub, and he often uses dubstep music in his performance. Recently, he has decided to take a couple of old songs and make dubstep remixes from them.

Let's assume that a song consists of some number of words. To make the dubstep remix of this song, Vasya inserts a certain number of words "WUB" before the first word of the song (the number may be zero), after the last word (the number may be zero), and between words (at least one between any pair of neighbouring words), and then the boy glues together all the words, including "WUB", in one string and plays the song at the club.

For example, a song with words "I AM X" can transform into a dubstep remix as "WUBWUBIWUBAMWUBWUBX" and cannot transform into "WUBWUBIAMWUBX".

Recently, Petya has heard Vasya's new dubstep track, but since he isn't into modern music, he decided to find out what was the initial song that Vasya remixed. Help Petya restore the original song.

Input
The input consists of a single non-empty string, consisting only of uppercase English letters, the string's length doesn't exceed 200 characters. It is guaranteed that before Vasya remixed the song, no word contained substring "WUB" in it; Vasya didn't change the word order. It is also guaranteed that initially the song had at least one word.

Output
Print the words of the initial song that Vasya used to make a dubsteb remix. Separate the words with a space.*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    string song, resp = "", aux = "";
    set<char> wub;
    int cont=0, cont2=0;

    wub.insert('W');
    wub.insert('U');
    wub.insert('B');
    
    cin >> song;
    int n = song.size();

    for(int i=0; i<n; i++)
    {
        if(wub.find(song[i]) == wub.end())
        {
            if(cont == 1)
            {
                resp += " ";
            }
            resp += aux;
            resp += song[i];
            aux = "";
            cont = cont2 = 0;
        }
        else
        {

            for(int j=0; j<aux.size(); j++)
            {
                if(aux[j] == song[i])
                {
                    if(cont2 == 1)
                    {
                        resp += " " + aux;
                        cont2 = cont = 0;
                    }
                    else
                    {
                        resp += aux;
                    }

                    aux = "";
                }
            }

            if(aux != "" and song[i] == 'W')
            {
                if(cont2 == 1)
                {
                    resp += " " + aux;
                    cont2 = cont = 0;
                }
                else
                {
                    resp += aux;
                }

                aux = "";
            }

            aux += song[i];
            
            

        }

        if(aux == "WUB")
        {
            if(resp != "")
            {
                cont = 1;
                cont2 = 1;
            }
            aux = "";
        }
    }

    if(aux != "" and aux != "WUB")
    {
        if(cont == 1)
        {
            resp += " ";
        }

        resp += aux;
    }

    cout << resp;

    return 0;
}