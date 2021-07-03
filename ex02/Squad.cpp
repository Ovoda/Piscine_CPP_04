#include "Squad.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Squad::Squad(void) : _squad(0), _count(0) {
}

Squad::Squad(const Squad &src) {
	_squad = 0;
	_count = 0;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Squad::~Squad(void)
{
	int i = 0;
	while (i < _count)
	{
		delete _squad[i];
		i++;
	}
	delete [] _squad;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Squad &Squad::operator=(Squad const &rhs)
{
	int i = -1;
	while (++i < _count)
	{
		delete getUnit(i);
		std::cout << "Old unit [" << i << "]" << " deleted" << std::endl;
	}
	delete [] _squad;
	_squad = 0;
	_count = 0;
	i = 0;
	while (i < rhs.getCount())
	{
		this->push(rhs.getUnit(i)->clone());
		i++;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, Squad const &i)
{
	int x = 0;
	while (x < i.getCount())
		o << "Unit[" << x << "] = " << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int Squad::getCount(void) const {
	return (_count);
}

int Squad::push(ISpaceMarine *unit)
{
	if (!unit)
	{
		std::cout << "[Pushed failed] Unit is NULL" << std::endl;
		return (_count);
	}
	int i = 0;
	while (i < _count)
	{
		if (unit == _squad[i++])
		{
			std::cout << "[Pushed failed] Unit is already in the squad" << std::endl;
			return (_count);
		}
	}
	ISpaceMarine ** new_squad = new ISpaceMarine*[_count + 1];
	i = 0;
	while (i < _count)
	{
		new_squad[i] = _squad[i];
		i++;
	}
	new_squad[i] = unit;
	_count += 1;
	delete [] _squad;
	_squad = new_squad;
	return (_count);
}

ISpaceMarine *Squad::getUnit(int index) const
{
	if (index >= 0 && index < _count)
		return (_squad[index]);
	return (NULL);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */