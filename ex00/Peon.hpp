#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{

	public:

		Peon( std::string const name );
		Peon( Peon const & src );
		~Peon();

		Peon &		operator=( Peon const & rhs );

		void		getPolymorphed( void ) const ;

	private:
		Peon( void );

};

std::ostream &			operator<<( std::ostream & o, Peon const & i );

#endif /* ************************************************************ PEON_H */