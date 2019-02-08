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
    short EXP;
    short KILLS;
    string INVENTORY[4] = {"health potion", "damage boost potion", "shield potion", "instakill potion"};

  public:
    User();
    bool Battle(Character, short);
    bool accessInventory();
    
};
