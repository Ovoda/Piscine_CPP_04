#include "ISquad.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ISquad::ISquad()
{
}

ISquad::ISquad( const ISquad & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ISquad::~ISquad()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ISquad &				ISquad::operator=( ISquad const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ISquad const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */