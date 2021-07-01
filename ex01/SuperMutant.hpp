#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{

	public:

		SuperMutant( void );
		SuperMutant( SuperMutant const & src );
		~SuperMutant();

		void	takeDamage( int value );

		SuperMutant &		operator=( SuperMutant const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, SuperMutant const & i );

#endif /* ***************************************************** SUPERMUTANT_H */