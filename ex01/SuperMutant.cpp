#include "SuperMutant.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperMutant::SuperMutant( void ) {
	setType("Super Mutant");
	setHP(170);
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant( const SuperMutant & src ) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

SuperMutant &				SuperMutant::operator=( SuperMutant const & rhs )
{
	if ( this != &rhs )
	{
		_type = rhs.getType();
		_hit_points = rhs.getHP();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, SuperMutant const & i ) {
	return (i.print(o));
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	SuperMutant::takeDamage( int value ) {
	Enemy::takeDamage( value - 3 );
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */