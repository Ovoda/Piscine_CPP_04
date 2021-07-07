#ifndef FIREGUN_HPP
# define FIREGUN_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class FireGun : public AWeapon 
{

	public:
		FireGun( void );
		FireGun( FireGun const & src );
		~FireGun();

		FireGun &		operator=( FireGun const & rhs );

		void	attack( void ) const;

};

std::ostream &			operator<<( std::ostream & o, FireGun const & i );

#endif /* ***************************************************** FIREGUN_H */