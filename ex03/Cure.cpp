#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure( void ) {
	_type = "cure";
}

Cure::Cure( const Cure & src ) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure() {
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &				Cure::operator=( Cure const & rhs )
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

AMateria	*Cure::clone( void ) const {
	AMateria *copy = new Cure(*this);
	return (copy);
}

void		Cure::use( ICharacter &target ) {
	std::cout << "* heals " << target.getName() << "'s wound *" << std::endl;
	AMateria::use(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */