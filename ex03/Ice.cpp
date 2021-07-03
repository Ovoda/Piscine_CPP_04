#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice( void ) {
	_type = "ice";
}

Ice::Ice( const Ice & src ) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice() {
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &				Ice::operator=( Ice const & rhs )
{
	if ( this != &rhs )
	{
		_type = rhs.getType();
		_xp = rhs.getXP();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria	*Ice::clone( void ) const {
	AMateria *copy = new Ice(*this);
	return (copy);
}

void		Ice::use( ICharacter &target ) {
	std::cout << "* Shoots a bolt of ice at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */