#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

	public:

		AssaultTerminator( void );
		AssaultTerminator( AssaultTerminator const & src );
		~AssaultTerminator();

		ISpaceMarine *clone() const;
		void battleCry( void ) const;
		void rangedAttack( void ) const;
		void meleeAttack( void ) const;
		AssaultTerminator &		operator=( AssaultTerminator const & rhs );

	private:

};

#endif /* ************************************************** ASSAULTTERMINATOR_H */