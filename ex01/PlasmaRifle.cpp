#include "PlasmaRifle.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PlasmaRifle::PlasmaRifle( void ) {
	AWeapon::setName("Plasma Rifle");
	AWeapon::setDamage(21);
	AWeapon::setAPCost(5);
}

PlasmaRifle::PlasmaRifle( const PlasmaRifle & src ) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PlasmaRifle::~PlasmaRifle() {
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PlasmaRifle &				PlasmaRifle::operator=( PlasmaRifle const & rhs ) {
	this->AWeapon::operator=(rhs);
	return *this;
}

std::ostream &			operator<<( std::ostream & o, PlasmaRifle const & i ) {
	return (i.print(o));
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	PlasmaRifle::attack( void ) const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */