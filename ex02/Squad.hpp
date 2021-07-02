#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>
# include "ISquad.hpp"

class Squad : public ISquad
{

	public:

		Squad( void );
		Squad( Squad const & src ); 
		~Squad();
		int 			getCount( void ) const;
		int 			push( ISpaceMarine * unit );
		ISpaceMarine 	*getUnit( int ) const;
		Squad &			operator=( Squad const & rhs );

	private:
		ISpaceMarine * _squad[];

};

std::ostream &			operator<<( std::ostream & o, Squad const & i );

#endif /* *********************************************************** SQUAD_H */