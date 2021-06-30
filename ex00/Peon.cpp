#include "Peon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Peon::Peon( void ) {
	std::cout << "Zog zog" << std::endl;
}

Peon::Peon( std::string const name ) : Victim(name) {
	std::cout << "Zog zog" << std::endl;
}

Peon::Peon( const Peon & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Peon &				Peon::operator=( Peon const & rhs )
{
	if ( this != &rhs )
		setName(rhs.getName());
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Peon const & i )
{
	Victim::<<(o, Victim(this.getName())); 
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Peon::getPolymorphed( void ) const {
	std::cout << _name << " has been turned into a pink pony!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */