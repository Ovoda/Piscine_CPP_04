#ifndef NINJADRAGON_HPP
# define NINJADRAGON_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class NinjaDragon : public Enemy
{

	public:

		NinjaDragon( void );
		NinjaDragon( NinjaDragon const & src );
		~NinjaDragon();

		void	takeDamage( int value );

		NinjaDragon &		operator=( NinjaDragon const & rhs );

	private:

};

std::ostream &			operator<<( std::ostream & o, NinjaDragon const & i );

#endif /* ***************************************************** NINJADRAGON_H */