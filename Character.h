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

  public:
    User();
    short retrievePlayerLevel();
    bool Battle(Character, short);
    void displayInventory();
    /* void editInventory(); -> to be implemented. this function will allow new items to be added if inventory is empty; if duplicate item obtained, will increment. */

    
};
