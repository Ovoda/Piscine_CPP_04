#include "Squad.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Squad::Squad(void) : _squad(0), _count(0) {
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
	while (i < _count)
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
	ISpaceMarine ** new_squad = new ISpaceMarine*[_count + 1];
	int i = 0;
	while (i < _count)
	{
		new_squad[i] = _squad[i];
		i++;
	}
	std::cout << "i = " << i << std::endl;
	new_squad[i] = unit;
	_count += 1;
	delete [] _squad;
	_squad = new_squad;
	return (i);
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