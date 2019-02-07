#include <string>
using namespace std;

class Character
{
    string NAME;
    short LVL;
    float HP;
    float ARMOR;
    short DAMAGE;

    public:
        bool Battle(Character, short);
        Character();
        Character(short);

};

class User : public Character
{
    short EXP;

    public:
        User();
};
//