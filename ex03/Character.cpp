#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character( void ) {
	// Never used;
}

Character::Character( std::string const & name ) : _index(0), _name(name) {
}

Character::Character( const Character & src ) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character() {
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=( Character const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_name = rhs.getName();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Character::equip( AMateria * m ) {
	if (_index < 4)
	{
		if (_inventory[_index] != 0)
		{
			std::cout << "Inventory : slot " << _index << std::endl;

		}
		_inventory[_index] = m;
		std::cout << "Ability equipped in inventory : slot " << _index << std::endl;
		_index++;
	}
	else
	{
		std::cout << "Inventory full" << std::endl;
	}
	
}
void 	Character::unequip(int idx) {
	if (idx >= 0 && idx < 4)
	{
		_inventory[idx] = 0;
		std::cout << "Ability unequiped" << std::endl;
	}
	else
		std::cout << "Ability not found" << std::endl;	
}

void	Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx < 4 && _inventory[idx] != 0)
		_inventory[idx]->use(target);
	else
		std::cout << "Ability not found" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const & Character::getName( void ) const {
	return (_name);
}

unsigned int	Character::getIndex( void ) const {
	return (_index);
}



/* ************************************************************************** */