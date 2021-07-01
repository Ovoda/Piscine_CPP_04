#include "PowerFist.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PowerFist::PowerFist( void ) {
	AWeapon::setName("Power Fist");
	AWeapon::setDamage(50);
	AWeapon::setAPCost(8);
}

PowerFist::PowerFist( const PowerFist & src ) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PowerFist::~PowerFist() {
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PowerFist &				PowerFist::operator=( PowerFist const & rhs ) {
	this->AWeapon::operator=(rhs);
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PowerFist const & i ) {
	return (i.print(o));
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	PowerFist::attack( void ) const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */