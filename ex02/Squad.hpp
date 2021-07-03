#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>
# include "ISquad.hpp"

class Squad : public ISquad
{

	public:
		// Constructors
		Squad( void );
		Squad( Squad const & src );

		// Destructor
		~Squad();

		// Assignation operator overload 
		Squad &			operator=( Squad const & rhs );

		// Accessors
		int 			getCount( void ) const;
		ISpaceMarine 	*getUnit( int ) const;

		// Methods
		int 			push( ISpaceMarine * unit );

	private:
		ISpaceMarine ** _squad;
		int				_count;

};

std::ostream &			operator<<( std::ostream & o, Squad const & i );

#endif /* *********************************************************** SQUAD_H */