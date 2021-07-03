#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

	public:
		// Constructors
		TacticalMarine( void );
		TacticalMarine( TacticalMarine const & src );

		// Destructor
		~TacticalMarine();

		// Assignation operator overload
		TacticalMarine &		operator=( TacticalMarine const & rhs );

		// Methods
		ISpaceMarine *clone( void ) const;
		void battleCry( void ) const;
		void rangedAttack( void ) const;
		void meleeAttack( void ) const;
};

#endif /* ************************************************** TACTICALMARINE_H */