#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{

	public:
		// Constructors
		Ice( void );
		Ice( Ice const & src );

		// Destructor
		~Ice();

		// Assignation operator overload
		Ice &		operator=( Ice const & rhs );

		// Methods
		AMateria	*clone( void ) const;
		void		use( ICharacter & target );

	private:
		

};

#endif /* ************************************************************* ICE_H */