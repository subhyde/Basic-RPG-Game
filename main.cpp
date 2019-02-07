#include <iostream>
#include <string>
#include "Windows.h"
#include "Character.h"
using namespace std;

int main()
{
    bool win = true;
    User Player;
    Character Monster;
    short levelCount = 0;

    cout << endl << "Battle " << levelCount + 1 << endl << "-----------------" << endl << endl;
    Sleep(2000);
    win = Player.Battle(Monster, levelCount);

    while(true)
    {
        if (win)
        {
            levelCount++;
            User Player;
            Character Monster(levelCount);
            cout << endl << "Battle " << levelCount + 1 << endl << "-----------------" << endl;
            Sleep(2000);
            win = Player.Battle(Monster, levelCount);

        }
        else
        {
            win = false;
            cout << "You LOSE!" << endl;
            cout << "Kills: " << levelCount;
            break;
        }
    }
}//
