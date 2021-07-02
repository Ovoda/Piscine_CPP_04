#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

void    show_squad( ISquad * squad ) {
    std::cout << std::endl << "___ SQUAD ___" << std::endl;
    std::cout << "nb unit : " << squad->getCount() << std::endl;

    std::cout << std::endl << "Units BattleCry : " << std::endl;
    for (int i = 0; i < squad->getCount(); i++)
    {
        //squad->getUnit(i)->battleCry();
        std::cout << squad->getUnit(i) << std::endl;
    }
    std::cout << std::endl << "Units Melee Attack : " << std::endl;
    for (int i = 0; i < squad->getCount(); i++)
        squad->getUnit(i)->meleeAttack();
    std::cout << std::endl << "Units Ranged Attack : " << std::endl;
    for (int i = 0; i < squad->getCount(); i++)
        squad->getUnit(i)->rangedAttack();
    std::cout << "___ SQUAD END ___" << std::endl << std::endl;
}

int main( void )
{
    ISquad *squad = new Squad;
    ISpaceMarine *unit_one = new TacticalMarine;
    ISpaceMarine *unit_two = new TacticalMarine;
    ISpaceMarine *unit_three = new AssaultTerminator;
    ISpaceMarine *unit_four = new AssaultTerminator;

    squad->push(unit_one);
    squad->push(unit_two);
    squad->push(unit_three);
    squad->push(unit_four);

    show_squad(squad);
    Squad *copy = new Squad(squad);
    show_squad(copy);

    delete squad;
    delete copy;
    return (0);
}