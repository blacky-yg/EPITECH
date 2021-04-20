#include "Character.hpp"
#include "Warrior.hpp"
#include "Mage.hpp"
#include "Priest.hpp"

#include "Hunter.hpp"

int main()
{
    Character koala("john", 2);
/*    Warrior koala("john", 2);
      Mage koala("john", 2);
      Priest koala("john", 2);
      Hunter koala("john", 2);*/
    koala.CloseAttack();
    koala.TakeDamage(70);
    koala.RangeAttack();
    koala.Heal();
    koala.TakeDamage(70);
    koala.TakeDamage(70);
    koala.RestorePower();
    koala.TakeDamage(70);
    koala.Range = Character::CLOSE;
    return (0);
}
