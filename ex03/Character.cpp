#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(void) : _index(0), _copy(false)
{
	_inventory[0] = 0;
	_inventory[1] = 0;
	_inventory[2] = 0;
	_inventory[3] = 0;
}

Character::Character(std::string const &name) : _index(0), _name(name), _copy(false)
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
	unsigned int i = 0;
	if (_copy == true)
	{
		while (i < 4 && _inventory[i] != 0)
		{
			delete _inventory[i];
			i++;
		}
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		_copy = true;
		for (unsigned int i = 0; i < 4; i++)
			delete _inventory[i];
		this->_name = rhs.getName();
		for (unsigned int i = 0; i < 4; i++)
		{
			if (rhs.getItem(i) != 0)
				_inventory[i] = (rhs._inventory[i]->clone());
			else
				_inventory[i] = 0;
			_index++;
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::equip(AMateria *m)
{
	while (_inventory[_index] != 0 && _index < 4)
		_index++;
	if (_index < 4)
	{
		_inventory[_index] = m;
		std::cout << "Ability equipped in inventory : slot " << _index << std::endl;
		_index = 0;
	}
	else
	{
		std::cout << "Inventory full" << std::endl;
	}
}
void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		_inventory[idx] = 0;
		_index = 0;
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