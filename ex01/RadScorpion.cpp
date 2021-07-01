#include "RadScorpion.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RadScorpion::RadScorpion( void ) {
	setType("RadScorpion");
	setHP(80);
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( const RadScorpion & src ) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RadScorpion &				RadScorpion::operator=( RadScorpion const & rhs )
{
	if ( this != &rhs )
	{
		_type = rhs.getType();
		_hit_points = rhs.getHP();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RadScorpion const & i ) {
	return (i.print(o));
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	RadScorpion::takeDamage( int value ) {
	Enemy::takeDamage( value );
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */