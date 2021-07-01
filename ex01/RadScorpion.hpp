#ifndef RAD_SCORPION_HPP
# define RAD_SCORPION_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{

	public:

		RadScorpion( void );
		RadScorpion( RadScorpion const & src );
		~RadScorpion();

		void	takeDamage( int value );

		RadScorpion &		operator=( RadScorpion const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, RadScorpion const & i );

#endif /* ***************************************************** RAD_SCORPION_H */