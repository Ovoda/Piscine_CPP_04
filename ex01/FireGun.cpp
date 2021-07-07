#include "FireGun.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FireGun::FireGun( void ) {
	AWeapon::setName("Fire Gun");
	AWeapon::setDamage(70);
	AWeapon::setAPCost(15);
}

FireGun::FireGun( const FireGun & src ) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FireGun::~FireGun() {
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FireGun &				FireGun::operator=( FireGun const & rhs ) {
	this->AWeapon::operator=(rhs);
	return *this;
}

std::ostream &			operator<<( std::ostream & o, FireGun const & i ) {
	return (i.print(o));
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	FireGun::attack( void ) const {
	std::cout << "* BOOSH! *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */