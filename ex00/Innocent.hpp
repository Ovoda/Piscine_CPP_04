#ifndef Innocent_HPP
# define Innocent_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Innocent : public Victim
{

	public:
		Innocent( std::string const name );
		Innocent( Innocent const & src );
		~Innocent();

		Innocent &		operator=( Innocent const & rhs );

		void		getPolymorphed( void ) const ;

	private:
		Innocent( void );

};

std::ostream &			operator<<( std::ostream & o, Innocent const & i );

#endif /* ************************************************************ Innocent_H */