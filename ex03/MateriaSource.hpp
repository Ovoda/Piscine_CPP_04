#ifndef MateriaSource_HPP
#define MateriaSource_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

	protected:
		std::string _type;
		unsigned int _xp;

	public:
		// Constructors
		MateriaSource( void );
		MateriaSource( MateriaSource const & src );
		MateriaSource( std::string const & type );

		// Destructor
		~MateriaSource();

		// Overloads
		MateriaSource &	operator=( MateriaSource const & rhs );

		// Accessors
		unsigned int	getIndex( void ) const;

		// Methods
		void 		learnMateria( AMateria * src );
		AMateria	*createMateria( std::string const &type );

	private:
		AMateria		*_inventory[4];
		unsigned int	_index;
};

#endif /* ******************************************************** MateriaSource_H */