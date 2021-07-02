#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

	public:

		TacticalMarine( void );
		TacticalMarine( TacticalMarine const & src );
		~TacticalMarine();

		ISpaceMarine *clone() const;
		void battleCry( void ) const;
		void rangedAttack( void ) const;
		void meleeAttack( void ) const;
	//	TacticalMarine &		operator=( TacticalMarine const & rhs );

	private:

};

#endif /* ************************************************** TACTICALMARINE_H */