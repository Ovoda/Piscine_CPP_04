#include "Innocent.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Innocent::Innocent( void ) {
	std::cout << "Goz Goz" << std::endl;
}

Innocent::Innocent( std::string const name ) : Victim(name) {
	std::cout << "Goz Goz" << std::endl;
}

Innocent::Innocent( const Innocent & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Innocent::~Innocent() {
	std::cout << "Plouf..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Innocent &				Innocent::operator=( Innocent const & rhs )
{
	if ( this != &rhs )
		setName(rhs.getName());
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Innocent const & i )
{
	i.print( o );
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Innocent::getPolymorphed( void ) const {
	std::cout << _name << " has been turned into a beautiful butterfly!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */