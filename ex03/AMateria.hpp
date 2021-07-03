#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{

	protected:
		AMateria( void );
		std::string		_type;
		unsigned int	_xp;

	public:
		// Constructors
		AMateria( std::string const &type );
		AMateria( AMateria const & src );
		
		// Destructor
		virtual ~AMateria();

		// Overloads
		AMateria &	operator=( AMateria const & rhs );

		// Accessors
		std::string const &getType( void ) const; //Returns the materia type
		unsigned int getXP( void ) const;			//Returns the Materia's XP
		
		// Methods
		virtual AMateria *clone( void ) const = 0;
		virtual void use( ICharacter &target );
};

#endif /* ******************************************************** AMATERIA_H */