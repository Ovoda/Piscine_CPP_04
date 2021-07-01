#include "Victim.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Victim::Victim( void ) {}

Victim::Victim( std::string const name ) {
	_name = name;
	std::cout << "Some random victim called " << _name << " just appeared !" << std::endl;
}

Victim::Victim( const Victim & src ) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Victim::~Victim() {
	std::cout << "Victim " << _name << " died for no apparent reason !" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Victim &				Victim::operator=( Victim const & rhs )
{
	if ( this != &rhs )
		setName(rhs.getName());
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Victim const & i )
{
	o << "I'm " << i.getName() << " and I like otters !" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Victim::getPolymorphed( void ) const {
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &	Victim::print( std::ostream & o ) const {
	o << *this;
	return (o);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void	Victim::setName( std::string const name ) {
	_name = name;
}

std::string	Victim::getName( void ) const {
	return (_name);
}

/* ************************************************************************** */