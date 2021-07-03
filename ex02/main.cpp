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
		std::cout << std::endl << " ___ Copy Constructor && Assignation tests ___ " << std::endl;
		std::cout << std::endl << "[Main unit constructor]" << std::endl;
		ISpaceMarine *foo = new TacticalMarine;
		ISpaceMarine *bar = new AssaultTerminator;
		ISpaceMarine *bob = new TacticalMarine;
		ISpaceMarine *jim = new AssaultTerminator;

		Squad squad;
		squad.push(bob);
		squad.push(jim);
		squad.push(jim);
		squad.push(NULL);

		std::cout << std::endl << "[Copy by constructor]" << std::endl;
		Squad copy(squad);

		std::cout  << std::endl << "[Copy by assignation] (Copy has 2 old units)" << std::endl;
		Squad assigned;
		assigned.push(foo);
		assigned.push(bar);
		assigned = copy;
		
		std::cout  << std::endl << "[Deep copy checks]" << std::endl;
		for (int i = 0; i < copy.getCount(); ++i)
		{
			std::cout << "Main unit	[" << i << "] = " << squad.getUnit(i) << std::endl;
			std::cout << "Copy unit	[" << i << "] = " << copy.getUnit(i) << std::endl;
			std::cout << "Asssigned unit	[" << i << "] = " << assigned.getUnit(i) << std::endl
					  << std::endl;
		}
		std::cout << "[Unit destructors]" << std::endl;
	}
	std::cout << " ___ ------------------------------------ ___ " << std::endl
			  << std::endl;
	return 0;
}