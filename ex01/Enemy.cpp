#include "Enemy.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Enemy::Enemy( void ) {
}

Enemy::Enemy( int hp, std::string const & type ) : _type(type), _hit_points(hp) {
}

Enemy::Enemy( const Enemy & src ) {
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Enemy::~Enemy() {
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Enemy &				Enemy::operator=( Enemy const & rhs )
{
	if ( this != &rhs )
	{
		_type = rhs.getType();
		_hit_points = rhs.getHP();
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Enemy const & i )
{
	o << "Type = " << i.getType() << std::endl
	<< "HP = " << i.getHP() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Enemy::takeDamage( int value ) {
	if (value < 0)
		return ;
	if (_hit_points - value < 0)
		_hit_points = 0;
	else
		_hit_points -= value;	
}

std::ostream	&Enemy::print( std::ostream &o ) const {
	o << *this;
	return (o);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void	Enemy::setType( std::string const type ) {
	_type = type;
}

void	Enemy::setHP( int hp ) {
	_hit_points = hp;
}

std::string	const	Enemy::getType( void ) const {
	return (_type);
}

int	Enemy::getHP( void ) const {
	return (_hit_points);
}

/* ************************************************************************** */