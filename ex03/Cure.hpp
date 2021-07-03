#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{

	public:
		// Constructors
		Cure( void );
		Cure( Cure const & src );

		// Destructor
		~Cure();

		// Assignation operator overload
		Cure &		operator=( Cure const & rhs );

		// Methods
		AMateria	*clone( void ) const;
		void		use( ICharacter &target );

	private:

};

#endif /* ************************************************************* CURE_H */