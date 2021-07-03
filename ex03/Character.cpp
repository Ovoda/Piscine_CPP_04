#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(void) : _index(0)
{
	_inventory[0] = 0;
	_inventory[1] = 0;
	_inventory[2] = 0;
	_inventory[3] = 0;
}

Character::Character(std::string const &name) : _index(0), _name(name)
{
	_inventory[0] = 0;
	_inventory[1] = 0;
	_inventory[2] = 0;
	_inventory[3] = 0;
}

Character::Character(const Character &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		std::cout << "bonjour" << std::endl;
		for (unsigned int i = 0; i < 4; i++)
			delete rhs.getItem(i);
		_index = rhs.getIndex();
		this->_name = rhs.getName();
		for (unsigned int i = 0; i < 4; i++)
		{
			if (rhs.getItem(i) != 0)
				_inventory[i] = rhs.getItem(i)->clone();
			else
				_inventory[i] = 0;
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::equip(AMateria *m)
{
	if (_index < 4)
	{
		if (_inventory[_index] != 0)
		{
			std::cout << "Inventory : slot " << _index << std::endl;
		}
		_inventory[_index] = m;
		std::cout << "Ability equipped in inventory : slot " << _index << std::endl;
		while (_index < 4 && _inventory[_index] != 0)
			_index++;
	}
	else
	{
		std::cout << "Inventory full" << std::endl;
	}
}
void Character::unequip(int idx)
{
	unsigned int i = 0;

	if (idx >= 0 && idx < 4)
	{
		_inventory[idx] = 0;
		for (i = _index + 1; i < 4; i++)
			_inventory[i] = _inventory[i + 1];
		_index = idx;
		std::cout << "Ability unequiped" << std::endl;
	}
	else
		std::cout << "Ability not found" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != 0)
		_inventory[idx]->use(target);
	else
		std::cout << "Ability not found" << std::endl;
}

AMateria *Character::getItem(unsigned int const index) const
{
	if (index >= 0 && index < 4 && _inventory[index] != 0)
		return (_inventory[index]);
	return (NULL);
}

AMateria *Character::cloneItem(unsigned int const index) const
{
	if (index >= 0 && index < 4)
		return (_inventory[index]->clone());
	return (NULL);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &Character::getName(void) const
{
	return (_name);
}

unsigned int Character::getIndex(void) const
{
	return (_index);
}

/* ************************************************************************** */