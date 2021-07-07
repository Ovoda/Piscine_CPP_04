#include "NinjaDragon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

NinjaDragon::NinjaDragon( void ) {
	setType("Ninja Dragon");
	setHP(300);
	std::cout << "Hasagi !" << std::endl;
}

NinjaDragon::NinjaDragon( const NinjaDragon & src ) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

NinjaDragon::~NinjaDragon() {
	std::cout << "* dying ninja noises *" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

NinjaDragon &				NinjaDragon::operator=( NinjaDragon const & rhs )
{
	if ( this != &rhs )
	{
		_type = rhs.getType();
		_hit_points = rhs.getHP();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, NinjaDragon const & i ) {
	return (i.print(o));
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	NinjaDragon::takeDamage( int value ) {
	Enemy::takeDamage( value - 3 );
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */