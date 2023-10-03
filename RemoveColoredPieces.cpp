#include <iostream>
using namespace std;

bool winnerOfGame(string colors)
{
    bool isDone = false;
    bool whoWin = true;
    string change;
    char removeChar;

    while (!isDone)
    {
        if (whoWin)
        {
            removeChar = 'A';
        }
        else
        {
            removeChar = 'B';
        }

        // checking if any changes happen during last iteration
        if (change != colors)
        {
            whoWin = !whoWin;
            change = colors;
            for (int i = 0; i < colors.length(); i++)
            {
                if (colors[i] == removeChar && colors[i - 1] == colors[i] && colors[i] == colors[i + 1])
                {
                    colors.erase(i, 1);
                }
            }
        }
        else
        {
            isDone = true;
            // return who win
            return whoWin;
        }

        // cout<<(colors)<<endl;
    }

    return whoWin;
}

int main()
{
    cout << boolalpha << winnerOfGame("AAABBBA");
}