#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

	public:
		// Constructors
		AssaultTerminator( void );
		AssaultTerminator( AssaultTerminator const & src );
		
		// Destructor
		~AssaultTerminator();
		
		// Assignation operator overload
		AssaultTerminator &		operator=( AssaultTerminator const & rhs );

		// Methods
		ISpaceMarine *clone( void ) const;
		void battleCry( void ) const;
		void rangedAttack( void ) const;
		void meleeAttack( void ) const;
};

#endif /* ************************************************** ASSAULTTERMINATOR_H */