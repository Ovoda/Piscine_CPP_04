#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria( void ) {
	// Never used;
}

AMateria::AMateria( std::string const & type ) {
	_type = type;
	_xp = 0;
}

AMateria::AMateria( const AMateria & src ) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if ( this != &rhs )
	{
		this->_type = rhs.getType();
		this->_xp = rhs.getXP();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	AMateria::use( ICharacter & target ) {
	_xp += 10;
	(void)target;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	const &	AMateria::getType( void ) const {
	return (_type);
}

unsigned int	AMateria::getXP( void ) const {
	return (_xp);
}
/* ************************************************************************** */