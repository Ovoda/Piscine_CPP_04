#include "Sorcerer.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Sorcerer::Sorcerer( void ) {}

Sorcerer::Sorcerer( std::string name, std::string title ) : _name(name), _title(title) {
	std::cout << _name << ", " << _title << " is born !" << std::endl;
}

Sorcerer::Sorcerer( const Sorcerer & src ) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Sorcerer::~Sorcerer() {
	std::cout << _name << ", " << _title << " is dead. Consequences will ever be the same !" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Sorcerer &				Sorcerer::operator=( Sorcerer const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_title = rhs.getTitle();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i )
{
	std::cout << "I am " << i.getName() << ", " << i.getTitle() << " and I like ponies !" << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Sorcerer::polymorph( Victim const & victim ) const {
	victim.getPolymorphed();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void		Sorcerer::setName( std::string const name ) {
	_name = name;
}

std::string	Sorcerer::getName( void ) const {
	return (_name);
}

void		Sorcerer::setTitle( std::string const title ) {
	_title = title;
}

std::string	Sorcerer::getTitle( void ) const {
	return (_title);
}

/* ************************************************************************** */