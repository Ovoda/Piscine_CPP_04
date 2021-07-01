#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(void)
{
}

Character::Character(std::string const &name) : _name(name), _ap_number(40), _weapon(NULL)
{
}

Character::Character(const Character &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character() {
	std::cout << _name << " destroyed" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		_name = rhs.getName();
		_ap_number = rhs.getAPNumber();
		_weapon = rhs.getWeapon();
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, Character const &i)
{
	o << i.getName() << " has "
	<< i.getAPNumber() << " AP";
	if (!i.getWeapon())
		o << " and is unarmed";
	else
		o << " and wields a " << i.getWeapon()->getName();
	o << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::recoverAP(void)
{
	if (_ap_number < 40)
	{
		_ap_number += 10;
		if (_ap_number > 40)
			_ap_number = 40;
		std::cout << "10 AP restored" << std::endl;
	}
	else
		std::cout << "AP already full" << std::endl;
}

void Character::equip(AWeapon *weapon)
{
	std::cout << _name << " has equiped " << weapon->getName() << std::endl;
	_weapon = weapon;
}

void Character::attack(Enemy * target)
{
	if (!_weapon)
		std::cout << "[No equiped weapon] Equip a weapon to attack" << std::endl;
	else if (_weapon->getAPCost() > _ap_number)
		std::cout << "[Not enough AP] You do not have enough Attack Point to attack with this weapon" << std::endl;
	else
	{
		std::cout << _name
		<< " attacks " << target->getType() 
		<< " with a " << _weapon->getName() << std::endl;
		_weapon->attack();
		setAPNumber(_ap_number - _weapon->getAPCost());
		target->takeDamage(_weapon->getDamage());
		if (target->getHP() <= 0)
			delete target;
	}
	

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void Character::setName(std::string const &name)
{
	_name = name;
}

std::string const Character::getName(void) const
{
	return (_name);
}

void Character::setAPNumber(int const value)
{
	_ap_number = value;
}

int Character::getAPNumber(void) const
{
	return (_ap_number);
}

void Character::setWeapon(AWeapon &weapon)
{
	_weapon = &weapon;
}

AWeapon *Character::getWeapon(void) const
{
	return (_weapon);
}

/* ************************************************************************** */