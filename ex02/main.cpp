#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
    {
        ISpaceMarine *bob = new TacticalMarine;
        ISpaceMarine *jim = new AssaultTerminator;
        ISquad *vlc = new Squad;
        vlc->push(bob);
        vlc->push(jim);
        for (int i = 0; i < vlc->getCount(); ++i)
        {
            ISpaceMarine *cur = vlc->getUnit(i);
            cur->battleCry();
            cur->rangedAttack();
            cur->meleeAttack();
        }
        delete vlc;
    }
    {
        ISpaceMarine *bob = new TacticalMarine;
        ISpaceMarine *jim = new AssaultTerminator;

        Squad squad;
        squad.push(bob);
        squad.push(jim);
        for (int i = 0; i < squad.getCount(); ++i)
            std::cout << squad.getUnit(i) << std::endl;

        Squad copy(squad);
        for (int i = 0; i < copy.getCount(); ++i)
            std::cout << copy.getUnit(i) << std::endl;
    }
    return 0;
}