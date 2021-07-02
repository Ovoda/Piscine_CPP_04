#include "TacticalMarine.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

TacticalMarine::TacticalMarine( void ) {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine( const TacticalMarine & src ) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

TacticalMarine::~TacticalMarine( void ) {
	std::cout << "Aaargh..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// TacticalMarine &				TacticalMarine::operator=( TacticalMarine const & rhs )
// {
// 	(void) rhs;
// 	return *this;
// }

/*
** --------------------------------- METHODS ----------------------------------
*/

ISpaceMarine *TacticalMarine::clone( void ) const {
	ISpaceMarine *copy = new TacticalMarine;
	std::cout << "addr=" << copy << std::endl;
	return (copy);
}


void	TacticalMarine::battleCry( void ) const {
	std::cout << "For the Holy Plot !" << std::endl;
}

void	TacticalMarine::rangedAttack( void ) const {
	std::cout << "* attacks with a bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack( void ) const {
	std::cout << "* attacks with a chainsword *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */