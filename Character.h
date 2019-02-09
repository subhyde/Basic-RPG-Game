#include <string>
using namespace std;

class Character
{
protected:
    string NAME;
    short LVL;
    float HP;
    float ARMOR;
    short DAMAGE;

public:
    Character();
    Character(short);
    friend class User;
};

class User : public Character
{
    short KILLS;
    string INVENTORY[4][4] = {{"health potion", "damage boost potion", "shield potion", "instakill potion"}, {"0", "0", "0", "0"}};
    int GOLD;
    int GOLDCOLLECT;
public:
    User();
    bool Battle(Character, short);
    void displayInventory();
    bool editInventory(string);
    void prepareNextRound();
    short retrievePlayerLevel();
    void afterBattle();


};
