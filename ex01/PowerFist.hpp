#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon 
{

	public:
		PowerFist( void );
		PowerFist( PowerFist const & src );
		~PowerFist();

		PowerFist &		operator=( PowerFist const & rhs );

		void	attack( void ) const;

};

std::ostream &			operator<<( std::ostream & o, PowerFist const & i );

#endif /* ***************************************************** POWERFIST_H */