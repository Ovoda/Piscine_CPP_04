#include "PlasmaRifle.hpp"
#include "NinjaDragon.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "FireGun.hpp"
#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <stdlib.h>

int main()
{
	Character *hero = new Character("Hero");
	AWeapon *pr = new PlasmaRifle;
	AWeapon *pf = new PowerFist;
	AWeapon *fg = new FireGun;
	Enemy *enemy;
	int input;

	system("clear");
	std::cout << "\033[1;37mWhich monster would you like to fight ?" << std::endl;
	std::cout << "[0] RadScorpion" << std::endl
			  << "[1] SuperMutant" << std::endl
			  << "[2] NinjaDragon" << std::endl << "Choose : ";
	std::cin >> input;
	if (std::cin.fail())
	{
		std::cout << "Wrong input, quitting the game..." << std::endl;
		return (1);
	}
	system("clear");
	switch (input)
	{
	case 0:
		enemy = new RadScorpion;
		break;
	case 1:
		enemy = new SuperMutant;
		break;
	case 2:
		enemy = new NinjaDragon;
		break;
	}
	std::cout << std::endl;
	while (1)
	{
		std::cout << "\033[1;0m";
		std::cout << "______________________________________________________" << std::endl;
		std::cout << "[0] Equip Power Fist   (damage: 50, AP cost: 8)" << std::endl
				  << "[1] Equip Plasma Rifle (damage: 21, AP cost: 5)" << std::endl
				  << "[2] Equip Fire Gun     (damage: 70, AP cost: 15)" << std::endl
				  << "[3] Refill 10 AP" << std::endl
				  << "[4] Attack" << std::endl;
		std::cout << "______________________________________________________" << std::endl;
		std::cout << "\033[1;32m" << *hero;
		std::cout << "\033[1;31m[" << enemy->getType() << "] HP : " << enemy->getHP() << std::endl;
		std::cout << "\033[1;37maction : ";
		std::cin >> input;
		system("clear");
		if (std::cin.fail())
		{
			std::cout << "Wrong input, quitting the game..." << std::endl;
			return (1);
		}
		switch (input)
		{
		case 0:
			hero->equip(pf);
			std::cout << std::endl;
			break;
		case 1:
			hero->equip(pr);
			std::cout << std::endl;
			break;
		case 2:
			hero->equip(fg);
			std::cout << std::endl;
			break;
		case 3:
			hero->recoverAP();
			std::cout << std::endl;
			break;
		case 4:
			if (hero->getWeapon() && hero->getWeapon()->getDamage() >= enemy->getHP())
			{
				hero->attack(enemy);
				delete pr;
				delete pf;
				delete fg;
				delete hero;
				return (0);
			}
			hero->attack(enemy);
			break;
		default:
			break;
		}
	}
	std::cout << "\033[1;36m" << std::endl;
	return (0);
}