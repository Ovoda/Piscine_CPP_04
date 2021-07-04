#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Character : public ICharacter
{

	public:
		// Constructors
		Character( void );
		Character( std::string const & name );
		Character(Character const &src);

		// Destructor
		~Character();

		//Accessors
		std::string const &getName( void ) const;
		unsigned int	getIndex( void ) const;
		AMateria		*cloneItem( unsigned int const index ) const ;
		AMateria		*getItem( unsigned int const index ) const ;

		// Overloads
		Character &operator=(Character const &rhs);
		
		// Methods
		void equip(AMateria *m);
		void unequip(int idx);
		void use( int idx, ICharacter &target );


	private:
		AMateria *_inventory[4];
		unsigned int	_index;
		std::string		_name;
		bool			_copy;
};

#endif /* ******************************************************* CHARACTER_H */