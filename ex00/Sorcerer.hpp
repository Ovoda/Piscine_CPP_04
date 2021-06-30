#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{

	public:

		Sorcerer( std::string name, std::string title );
		Sorcerer( Sorcerer const & src );
		~Sorcerer();

		Sorcerer &		operator=( Sorcerer const & rhs );
		// Accessor
		void		setName( std::string const name );
		void		setTitle( std::string const title );
		std::string	getName( void ) const;
		std::string	getTitle( void ) const;
		void		polymorph( Victim const & ) const;

	private:
		Sorcerer( void );
		std::string	_name;
		std::string	_title;
};

std::ostream &			operator<<( std::ostream & o, Sorcerer const & i );

#endif /* ******************************************************** SORCERER_H */