#include "AWeapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AWeapon::AWeapon(void) {
}

AWeapon::AWeapon( const AWeapon & src ) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AWeapon::~AWeapon() {
	std::cout << _name << " destroyed" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AWeapon &				AWeapon::operator=( AWeapon const & rhs )
{
	if ( this != &rhs )
	{
		_name = rhs.getName();
		_damage = rhs.getDamage();
		_ap_cost = rhs.getAPCost();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AWeapon const & i )
{
	o
	<< "Name : " << i.getName() << std::endl
	<< "Damage : " << i.getDamage() << std::endl
	<< "AP Cose : " << i.getAPCost() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

std::ostream &			AWeapon::print( std::ostream & o ) const {
	o << *this << std::endl;
	return (o);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	AWeapon::getName( void ) const {
	return (_name);
}

int	AWeapon::getDamage( void ) const {
	return (_damage);
}

int	AWeapon::getAPCost( void ) const {
	return (_ap_cost);
}

void	AWeapon::setName( std::string const name ) {
	_name = name;
}

void	AWeapon::setDamage( int const value ) {
	_damage = value;
}

void	AWeapon::setAPCost( int const value ) {
	_ap_cost = value;
}


/* ************************************************************************** */