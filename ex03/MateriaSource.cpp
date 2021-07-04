#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource(void) : _index(0)
{
	_inventory[0] = 0;
	_inventory[1] = 0;
	_inventory[2] = 0;
	_inventory[3] = 0;
}

MateriaSource::MateriaSource(std::string const &type)
{
	_inventory[0] = 0;
	_inventory[1] = 0;
	_inventory[2] = 0;
	_inventory[3] = 0;
	_index = 0;
	_type = type;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	unsigned int i = 0;
	while (i < 4 && _inventory[i] != 0)
	{
		delete _inventory[i];
		i++;
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		_index = rhs.getIndex();
		for (unsigned int i = 0; i < 4; i++)
			_inventory[i] = rhs._inventory[i];
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void MateriaSource::learnMateria(AMateria *src)
{
	if (!src)
	{
		std::cout << "Cannot learn NULL Matiera" << std::endl;
		return;
	}
	AMateria *copy = src->clone();
	if (_index < 4)
	{
		std::cout << "New Matiera learned" << std::endl;
		_inventory[_index] = copy;
		_index++;
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (unsigned int i = 0; i < _index; i++)
	{
		if (_inventory[i]->getType() == type)
		{
			std::cout << "new Materia of type [" << type << "] created !" << std::endl;
			return (_inventory[i]->clone());
		}
	}
	std::cout << "Couldn't create Materia of type [" << type << "]. Did you learn it ?" << std::endl;
	return (NULL);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

unsigned int MateriaSource::getIndex(void) const
{
	return (_index);
}

/* ************************************************************************** */