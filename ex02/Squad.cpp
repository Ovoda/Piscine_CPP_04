#include "Squad.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Squad::Squad(void)
{
	_squad[0] = NULL;
}

Squad::Squad(const Squad &src) {
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Squad::~Squad(void)
{
	int i = 0;
	while (_squad[i] != NULL)
	{
		delete _squad[i];
		i++;
	}
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Squad &Squad::operator=(Squad const &rhs)
{
	int i = 0;
	while (i < rhs.getCount())
	{
		this->push(rhs.getUnit(i)->clone());
		i++;
	}
	_squad[i] = NULL;
	return *this;
}

std::ostream &operator<<(std::ostream &o, Squad const &i)
{
	int x = 0;
	while (i.getUnit(x) != NULL)
		o << "Unit[" << x << "] = " << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int Squad::getCount(void) const
{
	int i = 0;
	while (_squad[i] != NULL)
		i++;
	return (i);
}

int Squad::push(ISpaceMarine *unit)
{
	int i = 0;
	while (_squad[i] != NULL)
		i++;
	_squad[i] = unit;
	_squad[i + 1] = NULL;
	return (i);
}

ISpaceMarine *Squad::getUnit(int index) const
{
	if (_squad[index] != NULL)
		return (_squad[index]);
	return (NULL);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */