#include "AssaultTerminator.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AssaultTerminator::AssaultTerminator( void ) {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator( const AssaultTerminator & src ) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AssaultTerminator::~AssaultTerminator( void ) {
	std::cout << "I'll be back..." << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AssaultTerminator &				AssaultTerminator::operator=( AssaultTerminator const & rhs ) {
	(void)rhs;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

ISpaceMarine *AssaultTerminator::clone( void ) const {
	ISpaceMarine *copy = new AssaultTerminator;
	std::cout << "addr=" << copy << std::endl;
	return (copy);
}


void	AssaultTerminator::battleCry( void ) const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void	AssaultTerminator::rangedAttack( void ) const {
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack( void ) const {
	std::cout << "* attacks with chainfists *" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */